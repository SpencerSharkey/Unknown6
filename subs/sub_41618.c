int __fastcall sub_41618(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@2
  int v5; // r3@3
  int v6; // r0@3
  int v7; // r0@7
  int v8; // r6@8
  int v9; // r7@9
  int v10; // r0@10
  _BYTE *v11; // r2@10
  unsigned int i; // r3@10
  char v13; // r1@11
  int v14; // r6@13
  int v15; // r7@14
  int v16; // r0@15
  _BYTE *v17; // r2@15
  unsigned int j; // r3@15
  char v19; // r1@16
  int v20; // r6@18
  int v21; // r7@19
  int v22; // r0@20
  _BYTE *v23; // r2@20
  unsigned int k; // r3@20
  char v25; // r1@21
  int v26; // r6@23
  int v27; // r7@24
  int v28; // r0@25
  _BYTE *v29; // r2@25
  unsigned int l; // r3@25
  char v31; // r1@26
  int v32; // r0@29
  _BYTE *v33; // r2@30
  unsigned int m; // r3@30
  char v35; // r1@31
  int v36; // r0@33
  _BYTE *v37; // r2@34
  unsigned int n; // r3@34
  char v39; // r1@35
  unsigned int v40; // r0@37
  unsigned int v41; // r0@42
  unsigned int v42; // r0@43
  int v43; // r0@45
  unsigned int v44; // r0@46
  int v45; // r0@48
  int v46; // r0@50
  unsigned int v47; // r0@53
  _DWORD *v48; // r0@56
  _BYTE *v49; // r2@61
  unsigned int ii; // r3@61
  char v51; // r1@62
  int v52; // r3@64
  int v53; // r6@65
  __int64 v54; // r0@65
  int v55; // r0@65
  _BYTE *v57; // r2@67
  char v58; // r3@69
  _BYTE *v59; // r2@71
  char v60; // r3@73
  _BYTE *v61; // r2@75
  char v62; // r3@77
  _BYTE *v63; // r2@79
  char v64; // r3@81
  _BYTE *v65; // r2@83
  char v66; // r3@85

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 16) > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(v2 + 24) + 4 * v4++;
      v6 = *(_DWORD *)(v5 + 4);
      *(_BYTE *)v3 = 10;
      v3 = sub_1152FC(v6, v3 + 1);
    }
    while ( *(_DWORD *)(v2 + 16) > v4 );
  }
  if ( *(_QWORD *)(v2 + 32) )
  {
    *(_BYTE *)v3 = 16;
    v3 = ((int (*)(void))sub_114D9C)();
  }
  if ( *(_DWORD *)(**(_DWORD **)(v2 + 40) - 12) )
  {
    WireFormat::VerifyUTF8StringFallback();
    v7 = *(_DWORD *)(v2 + 40);
    *(_BYTE *)v3 = 26;
    v3 = sub_1152FC(v7, v3 + 1);
  }
  v8 = *(_DWORD *)(v2 + 48);
  if ( v8 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v2 + 56) + 4 * v9 + 4);
      *(_BYTE *)v3 = 34;
      v11 = (_BYTE *)(v3 + 1);
      for ( i = *(_DWORD *)(v10 + 68); i > 0x7F; ++v11 )
      {
        v13 = i | 0x80;
        i >>= 7;
        *v11 = v13;
      }
      ++v9;
      *v11 = i;
      v3 = sub_401D8();
    }
    while ( v8 != v9 );
  }
  v14 = *(_DWORD *)(v2 + 64);
  if ( v14 )
  {
    v15 = 0;
    do
    {
      v16 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 4 * v15 + 4);
      *(_BYTE *)v3 = 42;
      v17 = (_BYTE *)(v3 + 1);
      for ( j = *(_DWORD *)(v16 + 136); j > 0x7F; ++v17 )
      {
        v19 = j | 0x80;
        j >>= 7;
        *v17 = v19;
      }
      ++v15;
      *v17 = j;
      v3 = sub_413C4();
    }
    while ( v14 != v15 );
  }
  v20 = *(_DWORD *)(v2 + 80);
  if ( v20 )
  {
    v21 = 0;
    do
    {
      v22 = *(_DWORD *)(*(_DWORD *)(v2 + 88) + 4 * v21 + 4);
      *(_BYTE *)v3 = 50;
      v23 = (_BYTE *)(v3 + 1);
      for ( k = *(_DWORD *)(v22 + 56); k > 0x7F; ++v23 )
      {
        v25 = k | 0x80;
        k >>= 7;
        *v23 = v25;
      }
      ++v21;
      *v23 = k;
      v3 = sub_403E0();
    }
    while ( v20 != v21 );
  }
  v26 = *(_DWORD *)(v2 + 96);
  if ( v26 )
  {
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(*(_DWORD *)(v2 + 104) + 4 * v27 + 4);
      *(_BYTE *)v3 = 58;
      v29 = (_BYTE *)(v3 + 1);
      for ( l = *(_DWORD *)(v28 + 152); l > 0x7F; ++v29 )
      {
        v31 = l | 0x80;
        l >>= 7;
        *v29 = v31;
      }
      ++v27;
      *v29 = l;
      v3 = sub_40870();
    }
    while ( v26 != v27 );
  }
  if ( !*(_BYTE *)(v2 + 8) )
  {
    v32 = *(_DWORD *)(v2 + 108);
    if ( !v32 )
      goto LABEL_94;
    *(_BYTE *)v3 = 66;
    v33 = (_BYTE *)(v3 + 1);
    for ( m = *(_DWORD *)(v32 + 64); m > 0x7F; ++v33 )
    {
      v35 = m | 0x80;
      m >>= 7;
      *v33 = v35;
    }
    *v33 = m;
    v3 = sub_40640();
    if ( !*(_BYTE *)(v2 + 8) )
    {
LABEL_94:
      v36 = *(_DWORD *)(v2 + 112);
      if ( v36 )
      {
        *(_BYTE *)v3 = 74;
        v37 = (_BYTE *)(v3 + 1);
        for ( n = *(_DWORD *)(v36 + 20); n > 0x7F; ++v37 )
        {
          v39 = n | 0x80;
          n >>= 7;
          *v37 = v39;
        }
        *v37 = n;
        v3 = sub_4059C();
      }
    }
  }
  v40 = *(_DWORD *)(v2 + 116);
  if ( v40 )
  {
    *(_BYTE *)v3 = 80;
    v61 = (_BYTE *)(v3 + 1);
    if ( (v40 & 0x80000000) != 0 )
    {
      v3 = ((int (*)(void))sub_114D9C)();
    }
    else
    {
      if ( (signed int)v40 > 127 )
      {
        do
        {
          v62 = v40 | 0x80;
          v40 >>= 7;
          *v61++ = v62;
        }
        while ( v40 > 0x7F );
      }
      *v61 = v40;
      v3 = (int)(v61 + 1);
    }
  }
  if ( *(_BYTE *)(v2 + 132) )
  {
    *(_BYTE *)v3 = 88;
    v3 += 2;
    *(_BYTE *)(v3 - 1) = 1;
  }
  if ( *(_BYTE *)(v2 + 133) )
  {
    *(_BYTE *)v3 = 96;
    v3 += 2;
    *(_BYTE *)(v3 - 1) = 1;
  }
  v41 = *(_DWORD *)(v2 + 120);
  if ( v41 )
  {
    *(_BYTE *)v3 = 104;
    v59 = (_BYTE *)(v3 + 1);
    if ( (v41 & 0x80000000) != 0 )
    {
      v3 = ((int (*)(void))sub_114D9C)();
    }
    else
    {
      if ( (signed int)v41 > 127 )
      {
        do
        {
          v60 = v41 | 0x80;
          v41 >>= 7;
          *v59++ = v60;
        }
        while ( v41 > 0x7F );
      }
      *v59 = v41;
      v3 = (int)(v59 + 1);
    }
  }
  v42 = *(_DWORD *)(v2 + 128);
  if ( v42 )
  {
    *(_BYTE *)v3 = 112;
    v57 = (_BYTE *)(v3 + 1);
    if ( (v42 & 0x80000000) != 0 )
    {
      v3 = ((int (*)(void))sub_114D9C)();
    }
    else
    {
      if ( (signed int)v42 > 127 )
      {
        do
        {
          v58 = v42 | 0x80;
          v42 >>= 7;
          *v57++ = v58;
        }
        while ( v42 > 0x7F );
      }
      *v57 = v42;
      v3 = (int)(v57 + 1);
    }
  }
  if ( *(_DWORD *)(**(_DWORD **)(v2 + 124) - 12) )
  {
    WireFormat::VerifyUTF8StringFallback();
    v43 = *(_DWORD *)(v2 + 124);
    *(_BYTE *)v3 = 122;
    v3 = sub_1152FC(v43, v3 + 1);
  }
  v44 = *(_DWORD *)(v2 + 144);
  if ( v44 )
  {
    *(_BYTE *)v3 = -128;
    v65 = (_BYTE *)(v3 + 2);
    *(_BYTE *)(v3 + 1) = 1;
    if ( (v44 & 0x80000000) != 0 )
    {
      v3 = ((int (*)(void))sub_114D9C)();
    }
    else
    {
      if ( (signed int)v44 > 127 )
      {
        do
        {
          v66 = v44 | 0x80;
          v44 >>= 7;
          *v65++ = v66;
        }
        while ( v44 > 0x7F );
      }
      *v65 = v44;
      v3 = (int)(v65 + 1);
    }
  }
  if ( *(_DWORD *)(**(_DWORD **)(v2 + 136) - 12) )
  {
    WireFormat::VerifyUTF8StringFallback();
    v45 = *(_DWORD *)(v2 + 136);
    *(_BYTE *)v3 = -118;
    *(_BYTE *)(v3 + 1) = 1;
    v3 = sub_1152FC(v45, v3 + 2);
  }
  if ( *(_DWORD *)(**(_DWORD **)(v2 + 140) - 12) )
  {
    WireFormat::VerifyUTF8StringFallback();
    v46 = *(_DWORD *)(v2 + 140);
    *(_BYTE *)v3 = -110;
    *(_BYTE *)(v3 + 1) = 1;
    v3 = sub_1152FC(v46, v3 + 2);
  }
  if ( *(_BYTE *)(v2 + 134) )
  {
    *(_BYTE *)(v3 + 1) = 1;
    v3 += 3;
    *(_BYTE *)(v3 - 3) = -104;
    *(_BYTE *)(v3 - 1) = 1;
  }
  v47 = *(_DWORD *)(v2 + 148);
  if ( v47 )
  {
    *(_BYTE *)v3 = -96;
    v63 = (_BYTE *)(v3 + 2);
    *(_BYTE *)(v3 + 1) = 1;
    if ( (v47 & 0x80000000) != 0 )
    {
      v3 = ((int (*)(void))sub_114D9C)();
    }
    else
    {
      if ( (signed int)v47 > 127 )
      {
        do
        {
          v64 = v47 | 0x80;
          v47 >>= 7;
          *v63++ = v64;
        }
        while ( v47 > 0x7F );
      }
      *v63 = v47;
      v3 = (int)(v63 + 1);
    }
  }
  if ( *(_BYTE *)(v2 + 135) )
  {
    *(_BYTE *)(v3 + 1) = 1;
    v3 += 3;
    *(_BYTE *)(v3 - 3) = -88;
    *(_BYTE *)(v3 - 1) = 1;
  }
  v48 = *(_DWORD **)(v2 + 152);
  if ( *(_DWORD *)(*v48 - 12) )
  {
    *(_BYTE *)v3 = -78;
    *(_BYTE *)(v3 + 1) = 1;
    v3 = sub_1152FC(v48, v3 + 2);
  }
  if ( *(_QWORD *)(v2 + 160) )
  {
    *(_BYTE *)v3 = -72;
    *(_BYTE *)(v3 + 1) = 1;
    v3 = ((int (*)(void))sub_114D9C)();
  }
  if ( *(_DWORD *)(v2 + 168) > 0 )
  {
    *(_BYTE *)v3 = -62;
    v49 = (_BYTE *)(v3 + 2);
    *(_BYTE *)(v3 + 1) = 1;
    for ( ii = *(_DWORD *)(v2 + 180); ii > 0x7F; ++v49 )
    {
      v51 = ii | 0x80;
      ii >>= 7;
      *v49 = v51;
    }
    *v49 = ii;
    v3 = (int)(v49 + 1);
    if ( *(_DWORD *)(v2 + 168) > 0 )
    {
      v52 = 0;
      do
      {
        v53 = v52 + 1;
        v54 = *(_QWORD *)(*(_DWORD *)(v2 + 176) + 8 * (v52 + 1));
        v55 = sub_114D9C(v54, HIDWORD(v54), v3);
        v52 = v53;
        v3 = v55;
      }
      while ( *(_DWORD *)(v2 + 168) > v53 );
    }
  }
  return v3;
}
