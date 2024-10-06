//tmpbuf:char [512];WorkingDir:char *
if ((fname[0] == '.') && (fname[1] == '/'))
  sprintf(tmpbuf, "%s%c%s", WorkingDir, '/', fname + 2);
else
  strcpy(tmpbuf, fname);
