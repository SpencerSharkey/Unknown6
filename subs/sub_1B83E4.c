int __fastcall sub_1B83E4(int a1, unsigned int a2, size_t a3)
{
  int v3; // r5@1
  unsigned int v4; // r4@1
  unsigned int v5; // r3@2
  int v6; // r2@2
  unsigned int v7; // r6@3
  unsigned int v8; // r7@3
  unsigned int v9; // r2@8
  unsigned int v11; // r6@16

  v3 = a1;
  v4 = a3;
  if ( !a3 )
    return v3;
  v5 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v4 > 1073741820 - v6 )
    sub_1B7044((unsigned int)"basic_string::append");
  v7 = a2;
  v8 = v4 + v6;
  if ( v4 + v6 > *(_DWORD *)(v5 - 8) )
  {
    if ( a2 < v5 )
      goto LABEL_5;
LABEL_15:
    if ( a2 <= v6 + v5 )
    {
      v11 = a2 - v5;
      sub_1B8250(a1, v8);
      v5 = *(_DWORD *)v3;
      v7 = v11 + *(_DWORD *)v3;
      v6 = *(_DWORD *)(*(_DWORD *)v3 - 12);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v5 - 4) <= 0 )
    goto LABEL_6;
  if ( a2 >= v5 )
    goto LABEL_15;
LABEL_5:
  sub_1B8250(a1, v8);
  v5 = *(_DWORD *)v3;
  v6 = *(_DWORD *)(*(_DWORD *)v3 - 12);
LABEL_6:
  if ( v4 == 1 )
    *(_BYTE *)(v5 + v6) = *(_BYTE *)v7;
  else
    memcpy((void *)(v5 + v6), (const void *)v7, v4);
  v9 = *(_DWORD *)v3;
  if ( (_UNKNOWN *)(*(_DWORD *)v3 - 12) != &unk_200B34 )
  {
    *(_DWORD *)(v9 - 12) = v8;
    *(_DWORD *)(v9 - 4) = 0;
    *(_BYTE *)(v9 + v8) = 0;
  }
  return v3;
}