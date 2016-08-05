int __fastcall sub_1B85C0(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r4@1
  int v4; // r0@1
  int result; // r0@3
  void *v6; // r3@4
  unsigned int *v7; // r2@5
  unsigned int v8; // r1@6
  char v9; // [sp+4h] [bp-Ch]@4

  v2 = *(_DWORD *)a2;
  v3 = a1;
  v4 = *(_DWORD *)a2 - 12;
  if ( *(_DWORD *)(*(_DWORD *)a2 - 4) < 0 )
  {
    v6 = sub_1B8200(v4, (int)&v9, 0);
    result = v3;
    *(_DWORD *)v3 = v6;
  }
  else
  {
    if ( (_UNKNOWN *)v4 != &unk_200B34 )
    {
      v7 = (unsigned int *)(v2 - 4);
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      __dmb();
    }
    result = v3;
    *(_DWORD *)v3 = v2;
  }
  return result;
}