//GC_descr_obj_size:func unsigned long;d:complex_descriptor
if (GC_descr_obj_size(&d) != 6)
  write(2, "wrong answer\n", 13);
