void __fastcall sub_114D9C(signed __int64 _R0, int a2)
{
  int v2; // r5@0
  void (__fastcall *v3)(_DWORD); // r10@0
  unsigned __int8 v4; // vf@1
  int v5; // r3@1
  signed int v6; // r4@1
  signed int v7; // r0@3
  unsigned int v8; // r4@3
  signed int v9; // r1@3
  signed int v10; // r6@3
  int v11; // r7@3
  unsigned __int8 v12; // cf@5
  bool v13; // zf@5
  unsigned int v14; // r2@5
  unsigned int v15; // r4@6
  unsigned int v16; // r5@6
  signed int v17; // r5@10
  int v18; // r1@10
  signed int v19; // r1@13
  int v20; // ST1C0_4@17
  int v21; // r3@18
  char v22; // t1@18
  int v23; // r0@23

  *(_WORD *)(((unsigned int)~v2 >> 23) + 2) = 2389;
  v3(_R0);
  v6 = 191;
  if ( v12 )
    v6 = 782336;
  v7 = 210;
  v8 = v6 << 8;
  v9 = 224;
  *(_DWORD *)(*(_BYTE *)((v8 << 12) + 0x1C) + 0x6C) = 210;
  v10 = vEE;
  v11 = *(_WORD *)(v5 + 4);
  if ( __CFSHL__(v8, 12) )
  {
    v7 = vE0;
    v9 = vE4;
    LOWORD(v5) = vEC;
  }
  v12 = __CFSHR__(vEE, 25);
  v14 = (signed int)vEE >> 25;
  v13 = v14 == 0;
  *(_WORD *)(v11 + 60) = v11;
  if ( (v10 >> 25 != 0) & __CFSHR__(v10, 25) )
  {
    v15 = v8 >> 4;
    v16 = v15 >> 8;
  }
  else
  {
    v15 = v8 >> 32;
    v16 = v15 >> 4;
  }
  *(_WORD *)(v11 + 36) = v11;
  if ( (v10 >> 25 != 0) & __CFSHR__(v10, 25) )
  {
    *(_DWORD *)(v10 + 28) = v7;
    v9 = *(_BYTE *)(v7 + 28);
  }
  *(_DWORD *)(v10 + v16) = v14;
  v17 = *(_DWORD *)(v9 + v15);
  *(_DWORD *)(v10 + 28) = v7;
  v18 = *(_BYTE *)(v7 + 28);
  if ( v10 >> 25 )
    JUMPOUT((char *)&loc_114ECE + 2);
  *(_DWORD *)(v10 + 28) = v7;
  while ( 1 )
  {
    v19 = *(_BYTE *)(v7 + 28);
    if ( !v13 & v12 )
    {
      *(_DWORD *)(v10 + 28) = v7;
      *(_DWORD *)(v10 + v17) = *(_BYTE *)(v7 + 28);
      *(_DWORD *)(v10 + 60) = v7;
      v5 = *(_BYTE *)(v7 + 28);
      v19 = v10 >> 13;
      v17 |= v10 >> 13;
      *(_DWORD *)(v10 + 60) = v7;
      LOWORD(v5) = *(_BYTE *)(v7 + 28);
      if ( !__CFSHR__(v10, 13) )
        break;
    }
    *(_WORD *)(v19 + 24) = v5;
    *(_DWORD *)(v10 + 60) = v7;
    v20 = *(_BYTE *)(v7 + 28);
    *(_DWORD *)v20 = v7;
    *(_DWORD *)(v20 + 4) = v20;
    while ( 1 )
    {
      *(_DWORD *)(v10 + 60) = v7;
      v21 = *(_BYTE *)(v7 + 28);
      *(_WORD *)(v10 + v17) = v7;
      *(_DWORD *)(v10 + 12) = v7;
      v22 = *(_BYTE *)(v7 + 28);
      *(_DWORD *)(v21 + (v10 >> 1)) = v19;
      v7 = v10 << 15;
      v5 = *(_BYTE *)((v10 << 15) + 0x1C);
      v17 = (signed int)v14 >> 13;
      *(_BYTE *)(v11 + 2) = v15;
      *(_BYTE *)((v10 << 15) + 1) = v11;
      JUMPOUT((signed int)v14 >> 13, 0, &loc_114EAE);
      *(_WORD *)(v19 + 2) = v11;
      v12 = __CFSHR__(v14, 31);
      v14 >>= 31;
      v13 = v14 == 0;
      LOWORD(v5) = *(_BYTE *)(v17 + 28);
      *(_WORD *)(v11 + 36) = v11;
      if ( (v14 != 0) & v12 )
      {
        v15 <<= 20;
        v17 = v15 << 24;
      }
      if ( !(((v14 & 0x80000000) != 0) ^ v4) )
        break;
      v15 <<= 16;
      v17 = v15 << 20;
      if ( !((((v15 << 20) & 0x80000000) != 0) ^ v4) )
      {
        v23 = *(_BYTE *)((v15 << 20) + 0x1C);
        *(_WORD *)(v11 + 36) = v11;
        JUMPOUT(&loc_115200);
      }
    }
  }
  JUMPOUT(&loc_114EEC);
}
