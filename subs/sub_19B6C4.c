void *__fastcall sub_19B6C4(unsigned int a1, int a2)
{
  int v2; // r4@2
  const void *v3; // r5@2
  unsigned int v4; // r1@2
  size_t v5; // r4@6
  int v6; // r0@6
  int v7; // r6@6
  void *v8; // r3@6
  void *result; // r0@10

  if ( a1 == a2 )
  {
    result = &unk_200B40;
  }
  else
  {
    v2 = a2;
    v3 = (const void *)a1;
    v4 = __clz(a1) >> 5;
    if ( !v2 )
      v4 = 0;
    if ( v4 )
      sub_1B6FC0("basic_string::_S_construct null not valid");
    v5 = v2 - a1;
    v6 = sub_1B7D04(v5);
    v7 = v6;
    v8 = (void *)(v6 + 12);
    if ( v5 == 1 )
      *(_BYTE *)(v6 + 12) = *(_BYTE *)v3;
    else
      v8 = memcpy((void *)(v6 + 12), v3, v5);
    if ( (_UNKNOWN *)v7 != &unk_200B34 )
    {
      *(_DWORD *)v7 = v5;
      *(_DWORD *)(v7 + 8) = 0;
      *(_BYTE *)(v7 + v5 + 12) = 0;
    }
    result = v8;
  }
  return result;
}
