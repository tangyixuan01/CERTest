//aulValue:U32 [4];b30AddrL:U32;strMemHead:MEM_REQ_HEAD_4DW;b2AddrType:U32;ausValue:U16 [8]
U32 Test_func(U32 ulAddr)
{
  HEAD_REQ_DW4_UNION unData;
  unData.strMemHead.b30AddrL = ulAddr >> 2;
  unData.strMemHead.b2AddrType = 0;
  printf("unData.strMemHead.b30AddrL=0x%x\r\n", unData.strMemHead.b30AddrL);
  printf("unData.strMemHead.b2AddrType=0x%x\r\n", unData.strMemHead.b2AddrType);
  printf("unData.aulValue[3]=0x%x\r\n", unData.aulValue[3]);
  printf("unData.ausValue[6]=0x%x\r\n", unData.ausValue[6]);
  printf("unData.ausValue[7]=0x%x\r\n", unData.ausValue[7]);
  return 0;
}

