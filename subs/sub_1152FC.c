int __fastcall sub_1152FC(const void **a1, _BYTE *a2)
{
  const void **v2; // r5@1
  unsigned int i; // r3@1
  char v4; // r2@2
  int v5; // r4@3
  void *v6; // r0@3
  const void *v7; // r1@3
  size_t v8; // r5@3

  v2 = a1;
  for ( i = *((_DWORD *)*a1 - 3); i > 0x7F; ++a2 )
  {
    v4 = i | 0x80;
    i >>= 7;
    *a2 = v4;
  }
  *a2 = i;
  v5 = (int)(a2 + 1);
  v6 = a2 + 1;
  v7 = *v2;
  v8 = *((_DWORD *)*v2 - 3);
  memcpy(v6, v7, v8);
  return v5 + v8;
}

/*

secondary?
http://hastebin.com/podomububa.mel

void __fastcall sub_1152FC(int a1)
{
  int v1; // r3@1

  v1 = *(_DWORD *)(*(_DWORD *)a1 - 12);
  JUMPOUT(loc_115306);
}
*/
