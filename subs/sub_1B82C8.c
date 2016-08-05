int __fastcall sub_1B82C8(int a1, const void **a2)
{
  const void **v2; // r7@1
  const void *v3; // r1@1
  int v4; // r4@1
  size_t v5; // r5@1
  int v6; // r3@2
  int v7; // r6@2
  int v8; // r8@2
  int v9; // r2@6

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  v5 = *((_DWORD *)v3 - 3);
  if ( v5 )
  {
    v6 = *(_DWORD *)a1;
    v7 = *(_DWORD *)(*(_DWORD *)a1 - 12);
    v8 = v7 + v5;
    if ( v7 + v5 > *(_DWORD *)(*(_DWORD *)a1 - 8) || *(_DWORD *)(v6 - 4) > 0 )
    {
      sub_1B8250(a1, v7 + v5);
      v6 = *(_DWORD *)v4;
      v3 = *v2;
      v7 = *(_DWORD *)(*(_DWORD *)v4 - 12);
    }
    if ( v5 == 1 )
      *(_BYTE *)(v6 + v7) = *(_BYTE *)v3;
    else
      memcpy((void *)(v6 + v7), v3, v5);
    v9 = *(_DWORD *)v4;
    if ( (_UNKNOWN *)(*(_DWORD *)v4 - 12) != &unk_200B34 )
    {
      *(_DWORD *)(v9 - 12) = v8;
      *(_DWORD *)(v9 - 4) = 0;
      *(_BYTE *)(v9 + v8) = 0;
    }
  }
  return v4;
}