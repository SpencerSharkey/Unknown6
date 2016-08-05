int __fastcall sub_1B8850(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r1@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = -1;
  if ( v3 )
    v6 = v3 + strlen((const char *)v3);
  *(_DWORD *)v4 = sub_19B6C4(v3, v6, v5);
  return v4;
}