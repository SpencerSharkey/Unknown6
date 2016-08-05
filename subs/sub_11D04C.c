signed int __fastcall sub_11D04C(int a1, int a2, int a3, int a4)
{
  int v4; // r2@1
  int v5; // r8@1
  int v6; // r12@1
  int v7; // r4@1
  int v8; // r9@1
  int v9; // lr@1
  int v10; // r7@1
  int v11; // r3@1
  int v12; // r0@5
  bool v13; // zf@6
  int v14; // r6@10
  int v15; // r5@15
  signed int v16; // r6@15
  int v17; // t1@17
  int v18; // r3@18
  signed int v19; // r6@19
  int v20; // r0@21
  signed int result; // r0@22
  bool v22; // cf@25
  int v23; // r5@30
  int v24; // r10@16
  unsigned int v25; // [sp+0h] [bp-30h]@1
  int v26; // [sp+4h] [bp-2Ch]@1

  v4 = a3 + a2;
  v5 = v4 - 7;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 44);
  v8 = *(_DWORD *)(a1 + 32) + *(_DWORD *)a1;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 28);
  v26 = a4;
  v11 = a2;
  v25 = *(_DWORD *)(a1 + 4);
  while ( v11 << 29 )
  {
    if ( v4 <= (unsigned int)v11 )
      goto LABEL_38;
    if ( !*(_BYTE *)(v7 + *(_BYTE *)v11) )
    {
      v12 = v11 + 1;
      do
      {
        v11 = v12;
        if ( !(v12 << 29) )
          goto LABEL_9;
        v13 = v12++ == v4;
      }
      while ( !v13 && !*(_BYTE *)(v7 + *(_BYTE *)v11) );
    }
LABEL_14:
    if ( v4 <= (unsigned int)v11 )
      goto LABEL_38;
LABEL_15:
    v15 = v11 + 1;
    v16 = *(_BYTE *)(v8 + *(_BYTE *)v11);
    if ( v16 <= 239 )
    {
      do
      {
        v18 = v8 + (v16 << v6);
        if ( v15 == v4 )
        {
          v19 = v16 << v6;
          goto LABEL_20;
        }
        v17 = *(_BYTE *)v15++;
        v16 = *(_BYTE *)(v18 + v17);
      }
      while ( v16 <= 239 );
      v24 = v18 - v8;
    }
    else
    {
      v24 = 0;
    }
    v11 = v15 - 1;
    if ( v25 <= v24 )
    {
      v23 = v15 - 2;
      do
      {
        v22 = a2 >= (unsigned int)v23;
        v11 = v23--;
      }
      while ( !v22 && (unsigned __int8)(*(_BYTE *)v11 & 0xC0) == 128 );
    }
    if ( v16 != 253 )
    {
      result = v16;
      v4 = v11;
      goto LABEL_23;
    }
  }
LABEL_9:
  if ( v5 <= (unsigned int)v11 )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = v11 + 8;
    if ( ((*(_DWORD *)(v11 + 4) + v10) | (*(_DWORD *)v11 + v10) | (*(_DWORD *)v11 - v9) | (*(_DWORD *)(v11 + 4) - v9)) & 0x80808080 )
    {
      if ( *(_BYTE *)(v7 + *(_BYTE *)(v11 + 1)) | *(_BYTE *)(v7 + *(_BYTE *)v11) | *(_BYTE *)(v7 + *(_BYTE *)(v11 + 2)) | *(_BYTE *)(v7 + *(_BYTE *)(v11 + 3)) )
        goto LABEL_14;
      if ( *(_BYTE *)(v7 + *(_BYTE *)(v11 + 5)) | *(_BYTE *)(v7 + *(_BYTE *)(v11 + 4)) | *(_BYTE *)(v7
                                                                                                  + *(_BYTE *)(v11 + 6)) | *(_BYTE *)(v7 + *(_BYTE *)(v11 + 7)) )
        break;
    }
    v11 += 8;
    if ( v5 <= (unsigned int)v14 )
      goto LABEL_14;
  }
  v11 += 4;
  if ( v4 > (unsigned int)v11 )
    goto LABEL_15;
LABEL_38:
  v4 = v11;
  v19 = 0;
LABEL_20:
  if ( v25 > v19 )
  {
    result = 241;
  }
  else
  {
    v20 = v4 - 1;
    do
    {
      v22 = a2 >= (unsigned int)v20;
      v4 = v20--;
    }
    while ( !v22 && (unsigned __int8)(*(_BYTE *)v4 & 0xC0) == 128 );
    result = 240;
  }
LABEL_23:
  *(_DWORD *)v26 = v4 - a2;
  return result;
}