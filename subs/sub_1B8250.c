void __fastcall sub_1B8250(int a1, unsigned int a2)
{
  int v2; // r3@1
  int v3; // r4@2
  int v4; // r0@2
  unsigned int v5; // r3@2
  int v6; // r2@3
  void *v7; // r7@5
  void *v8; // r0@5
  unsigned int *v9; // r2@10
  unsigned int v10; // r3@11
  char v11; // [sp+4h] [bp-14h]@5

  v2 = *(_DWORD *)a1;
  if ( a2 != *(_DWORD *)(*(_DWORD *)a1 - 8) || *(_DWORD *)(v2 - 4) > 0 )
  {
    v3 = a1;
    v4 = v2 - 12;
    v5 = *(_DWORD *)(v2 - 12);
    if ( a2 < v5 )
      v6 = 0;
    else
      v6 = a2 - v5;
    v7 = sub_1B8200(v4, (int)&v11, v6);
    v8 = (void *)(*(_DWORD *)v3 - 12);
    if ( v8 != &unk_200B34 )
    {
      v9 = (unsigned int *)(*(_DWORD *)v3 - 4);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      __dmb();
      if ( (signed int)v10 <= 0 )
        operator delete(v8);
    }
    *(_DWORD *)v3 = v7;
  }
}