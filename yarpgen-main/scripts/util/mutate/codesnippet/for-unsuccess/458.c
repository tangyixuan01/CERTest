//ush:__be16 *;label:struct sun_disklabel;csum:__be16
for (csum = 0; ush >= ((__be16 *) (&label));)
  csum ^= *(ush--);
