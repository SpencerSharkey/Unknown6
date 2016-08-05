int __fastcall sub_11AC40(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  unsigned int v6; // r3@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = (void *)(v2 - 12);
  if ( (_UNKNOWN *)(v2 - 12) != &unk_200B34 )
  {
    v5 = (unsigned int *)(v2 - 4);
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 - 1, v5) );
    __dmb();
    if ( (signed int)v6 <= 0 )
      operator delete(v3);
  }
  return v1;
}