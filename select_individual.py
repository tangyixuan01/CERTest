import random
import numpy as np

from sklearn.metrics import pairwise_distances
from random import choice

from pyclustering.cluster.kmeans import kmeans
from pyclustering.cluster.center_initializer import kmeans_plusplus_initializer


def get_clusters_and_centers(X):
	amount_initial_centers = 2
	initial_centers = kmeans_plusplus_initializer(X, amount_initial_centers).initialize()
	kmeans_instance = kmeans(X, initial_centers)
	kmeans_instance.process()
	clusters = kmeans_instance.get_clusters()
	centers = kmeans_instance.get_centers()

	each_center_idxs = []
	for ith in range(len(centers)):
		clst = clusters[ith]
		center = centers[ith]
		min_sim = 10000
		for idx in clst:
			vec = X[idx]
			sim = np.linalg.norm(vec-center)
			if sim < min_sim:
				min_sim = sim
				min_sim_idx = idx
		each_center_idxs.append(min_sim_idx)

	return clusters, each_center_idxs

def get_center_for_all_data(X):
	vec_sum = np.zeros(X[0].size)
	for item in X:
		vec_sum = np.add(vec_sum, item)

	center = vec_sum / len(X)

	dist2center = []
	for idx in range(len(X)):
		dist = np.linalg.norm(X[idx]-center)
		dist2center.append((idx, dist))
    
	sort_dist2center = sorted(dist2center,key=lambda x:x[1],reverse = False)
	actual_center_idx = sort_dist2center[0][0]

	return actual_center_idx

def get_pairwise_dist(X, metric='euclidean'):
	return pairwise_distances(X, metric=metric)

def select_clusters_data(cluster_points, cluster_points_vec, cluster_sel_point, cluster_sel_points_vec, dist2center):
	max_dist = 0.0
	max_idx  = -1
	dist2sel = pairwise_distances(cluster_points_vec, np.array(cluster_sel_points_vec), metric='euclidean')
	min_dist2sel = np.amin(dist2sel,axis=1)
        
	for idx in range(len(cluster_points_vec)):
		if cluster_points[idx] in cluster_sel_point:
			continue

		dist = dist2center[idx] * min_dist2sel[idx]
		if dist > max_dist:
			max_dist = dist
			max_idx = cluster_points[idx]
	return max_idx

def select_subdataset(mutator_list, num):
	best_mutator_list_vec = []
	best_mutator_list_key = []
	for key,value in mutator_list.items():
		best_mutator_list_key.append(key)
		best_mutator_list_vec.append(value)
	dataset = np.array(best_mutator_list_vec)
	sel_num = num
	clusters, each_center_idxs = get_clusters_and_centers(dataset)

	#calculate the nearest cluster and farthest cluster
	origin_vec = np.zeros(dataset[each_center_idxs[0]].size)
	dist_each_center1 = np.linalg.norm(dataset[each_center_idxs[0]]-origin_vec)
	dist_each_center2 = np.linalg.norm(dataset[each_center_idxs[1]]-origin_vec)

	far_cluster = []
	near_cluster = []
	far_cluster_center_idxs = 0
	near_cluster_center_idxs = 0
	if dist_each_center1 > dist_each_center2:
		#each_center_idxs[0] is the farthest cluster center index
		far_cluster_center_idxs = each_center_idxs[0]
		near_cluster_center_idxs = each_center_idxs[1]
		for each_cluster in clusters:
			if each_center_idxs[0] in each_cluster:
				far_cluster = each_cluster
			else:
				near_cluster = each_cluster
	else:
		#each_center_idxs[0] is the nearest cluster center index
		near_cluster_center_idxs = each_center_idxs[0]
		far_cluster_center_idxs = each_center_idxs[1]
		for each_cluster in clusters:
			if each_center_idxs[0] in each_cluster:
				near_cluster = each_cluster
			else:
				far_cluster = each_cluster   

	far_cluster_vec = [dataset[idx] for idx in far_cluster]
	near_cluster_vec = [dataset[idx] for idx in near_cluster]

	center_for_all_data = get_center_for_all_data(dataset)
	pairwise_dist = get_pairwise_dist(dataset)

	sel_points = []
	sel_points_vec = []
	count = 0
	dist2center = pairwise_dist[:,center_for_all_data]
	count_exit = 0
	while count < sel_num:
		greey_para = random.random()
		if greey_para > 0.1:
			#select from far_cluster
			if far_cluster_center_idxs not in sel_points:
				#add far_cluster_center_idxs
				sel_points.append(far_cluster_center_idxs)
				sel_points_vec.append(dataset[far_cluster_center_idxs])
				count += 1
			else:
				if len(far_cluster) > 0:
					sel_cluster_point = select_clusters_data(far_cluster, far_cluster_vec, sel_points, sel_points_vec, dist2center)
					if sel_cluster_point != -1:
						sel_points.append(sel_cluster_point)
						sel_points_vec.append(dataset[sel_cluster_point])
						count += 1

						index_far_cluster_select = far_cluster.index(sel_cluster_point)
						far_cluster.remove(sel_cluster_point)
						del far_cluster_vec[index_far_cluster_select]                  
					else:
						sel_cluster_point = choice(far_cluster)
						index_far_cluster_select = far_cluster.index(sel_cluster_point)
						sel_points.append(sel_cluster_point)
						sel_points_vec.append(dataset[sel_cluster_point])
						count += 1

						far_cluster.remove(sel_cluster_point)
						del far_cluster_vec[index_far_cluster_select]
				else:
					continue
              
		else:
			#select from near_cluster
			if near_cluster_center_idxs not in sel_points:
				#add near_cluster_center_idxs
				sel_points.append(near_cluster_center_idxs)
				sel_points_vec.append(dataset[near_cluster_center_idxs])
				count += 1
			else:
				if len(near_cluster) > 0:
					sel_cluster_point = select_clusters_data(near_cluster, near_cluster_vec, sel_points, sel_points_vec, dist2center)
					if sel_cluster_point != -1:
						sel_points.append(sel_cluster_point)
						sel_points_vec.append(dataset[sel_cluster_point])
						count += 1

						index_near_cluster_select = near_cluster.index(sel_cluster_point)
						near_cluster.remove(sel_cluster_point)
						del near_cluster_vec[index_near_cluster_select]
					else:
						sel_cluster_point = choice(near_cluster)
						index_near_cluster_select = near_cluster.index(sel_cluster_point)
						sel_points.append(sel_cluster_point)
						sel_points_vec.append(dataset[sel_cluster_point])
						count += 1

						near_cluster.remove(sel_cluster_point)
						del near_cluster_vec[index_near_cluster_select]
				else:
					continue
		count_exit += 1
		print('-------------count is : '+str(count)+' ------count_exit is: '+str(count_exit)+'--------')
		if count_exit > 500:
			break

	sel_mutator_list = []
	for sub_sel_point in sel_points:
		sel_mutator_list.append(best_mutator_list_key[sub_sel_point])
        
	return sel_mutator_list

