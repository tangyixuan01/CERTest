//num:int;flags:unsigned int;quantity:unsigned int;container:unsigned int
long long equation3(struct field *data)
{
  return (((((long long) data->num) << 32) | (data->flags << 12)) | (data->container << 8)) | data->quantity;
}

