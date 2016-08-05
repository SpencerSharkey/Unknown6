unsigned int __fastcall sub_11D268(int a1, int a2)
{
  int v2; // r4@2
  int v3; // r1@2
  int v4; // r0@2
  unsigned int result; // r0@3
  int v6; // [sp+4h] [bp-Ch]@2

  if ( byte_1FA40C )
  {
    v2 = a2;
    v3 = a1;
    v6 = 0;
    v4 = v2;
    if ( v2 )
    {
      sub_11D1C4(&unk_1F0D00, v3, v2, &v6);
      v4 = v6;
    }
    result = __clz(v2 - v4) >> 5;
  }
  else
  {
    result = 1;
  }
  return result;
}