//ret:int  xmlCleanURI:void  uri:void  str:const char  tmp:const char  xmlParseRelativeURI:int  
if (ret != 0)
{
  xmlCleanURI(uri);
  str = tmp;
  ret = xmlParseRelativeURI(uri, &str);
}
