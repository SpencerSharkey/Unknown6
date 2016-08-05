void *__fastcall sub_19B6C4(unsigned int a1, int a2, int a3)
{
  int v3; // r4@2
  const void *v4; // r5@2
  unsigned int v5; // r1@2
  unsigned int v6; // r4@6
  void *v7; // r0@6
  void *v8; // r6@6
  void *v9; // r3@6
  void *result; // r0@9

  if ( a1 == a2 )
  {
    result = &unk_200B40;
  }
  else
  {
    v3 = a2;
    v4 = (const void *)a1;
    v5 = __clz(a1) >> 5;
    if ( !v3 )
      v5 = 0;
    if ( v5 )
      sub_1B6FC0((int)"basic_string::_S_construct null not valid");
    v6 = v3 - a1;
    v7 = basic_string::_S_create(v6, 0);
    v8 = v7;
    v9 = (char *)v7 + 12;
    if ( v6 == 1 )
      *((_BYTE *)v7 + 12) = *(_BYTE *)v4;
    else
      v9 = memcpy((char *)v7 + 12, v4, v6);
    if ( v8 != &unk_200B34 )
    {
      *(_DWORD *)v8 = v6;
      *((_DWORD *)v8 + 2) = 0;
      *((_BYTE *)v8 + v6 + 12) = 0;
    }
    result = v9;
  }
  return result;
}