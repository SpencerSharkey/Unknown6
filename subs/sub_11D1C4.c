signed int __fastcall sub_11D1C4(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r10@1
  int v9; // r8@1
  int v10; // r3@6
  int v11; // r2@6
  signed int result; // r0@7
  int v13; // r3@14
  bool v14; // cf@17
  bool v15; // zf@17
  int v16; // [sp+4h] [bp-34h]@1
  int v17; // [sp+Ch] [bp-2Ch]@6
  int v18; // [sp+20h] [bp-18h]@18

  v4 = a2 + a3;
  v5 = a2 + a3 - 7;
  v6 = a2;
  v7 = a3;
  v8 = a1;
  v9 = a2;
  v16 = a4;
  do
  {
    while ( v6 << 29 )
    {
      if ( v4 <= (unsigned int)v6 || (signed int)*(_BYTE *)v6 < 0 )
        goto LABEL_6;
      ++v6;
    }
    while ( v5 > (unsigned int)v6 && !((*(_DWORD *)(v6 + 4) | *(_DWORD *)v6) & 0x80808080) )
      v6 += 8;
    if ( v4 <= (unsigned int)v6 || (signed int)*(_BYTE *)v6 < 0 )
    {
LABEL_6:
      v10 = v6 - v9;
      v17 = 0;
      v11 = v7 - (v6 - v9);
      if ( v7 == v6 - v9 )
        goto LABEL_7;
      goto LABEL_19;
    }
    v13 = v6 + 1;
    while ( 1 )
    {
      v14 = v4 >= (unsigned int)v13;
      v15 = v4 == v13;
      v6 = v13++;
      if ( v15 || !v14 )
        break;
      if ( (signed int)*(_BYTE *)v6 < 0 )
        goto LABEL_6;
    }
    v10 = v6 - v9;
    v18 = 0;
    v11 = v7 - (v6 - v9);
    if ( v7 == v6 - v9 )
    {
LABEL_7:
      result = 241;
      goto LABEL_8;
    }
LABEL_19:
    result = sub_11D04C(v8, v6, v11, (int)&v17);
    v6 += v18;
  }
  while ( result == 253 );
  v10 = v6 - v9;
LABEL_8:
  *(_DWORD *)v16 = v10;
  return result;
}