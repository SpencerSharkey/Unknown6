_BYTE *__fastcall sub_413C4(int a1, _BYTE *a2)
{
  _BYTE *v2; // r2@1
  int v3; // r4@1
  _BYTE *v4; // r2@4
  unsigned int i; // r3@4
  char v6; // r1@5
  int v7; // r5@7
  unsigned int v8; // r0@8
  char v9; // r3@10
  _BYTE *v10; // r3@14
  unsigned int j; // r1@14
  char v12; // r2@15
  int v13; // r3@17
  int v14; // r0@17
  int v15; // r1@18
  unsigned int v16; // r1@18
  _BYTE *v17; // r3@20
  unsigned int k; // r1@20
  char v19; // r2@21
  int v20; // r3@23
  int v21; // r0@23
  int v22; // r1@24
  unsigned int v23; // r1@24
  _BYTE *v24; // r3@26
  unsigned int l; // r1@26
  char v26; // r2@27
  int v27; // r3@29
  int v28; // r0@29
  int v29; // r1@30
  unsigned int v30; // r1@30
  _BYTE *v31; // r2@32
  unsigned int m; // r3@32
  char v33; // r1@33
  int v34; // r3@35
  int v35; // r1@36
  _BYTE *v36; // r2@38
  unsigned int n; // r3@38
  char v38; // r1@39
  int v39; // r3@41
  int v40; // r1@42
  _BYTE *v41; // r2@44
  unsigned int ii; // r3@44
  char v43; // r1@45
  int v44; // r3@47
  int v45; // r1@48

  v2 = a2;
  v3 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *a2 = 8;
    v2 = (_BYTE *)sub_114D9C();
  }
  if ( *(_DWORD *)(v3 + 24) > 0 )
  {
    *v2 = 18;
    v4 = v2 + 1;
    for ( i = *(_DWORD *)(v3 + 36); i > 0x7F; ++v4 )
    {
      v6 = i | 0x80;
      i >>= 7;
      *v4 = v6;
    }
    *v4 = i;
    v2 = v4 + 1;
    if ( *(_DWORD *)(v3 + 24) > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v3 + 32) + 4 * v7 + 4);
        if ( (v8 & 0x80000000) != 0 )
        {
          v2 = (_BYTE *)sub_114D9C();
        }
        else
        {
          if ( (signed int)v8 > 127 )
          {
            do
            {
              v9 = v8 | 0x80;
              v8 >>= 7;
              *v2++ = v9;
            }
            while ( v8 > 0x7F );
          }
          *v2++ = v8;
        }
        ++v7;
      }
      while ( *(_DWORD *)(v3 + 24) > v7 );
    }
  }
  if ( *(_DWORD *)(v3 + 40) > 0 )
  {
    *v2 = 26;
    v10 = v2 + 1;
    for ( j = *(_DWORD *)(v3 + 52); j > 0x7F; ++v10 )
    {
      v12 = j | 0x80;
      j >>= 7;
      *v10 = v12;
    }
    *v10 = j;
    v2 = v10 + 1;
    if ( *(_DWORD *)(v3 + 40) > 0 )
    {
      v13 = (int)(v10 + 5);
      v14 = 0;
      do
      {
        v2 = (_BYTE *)v13;
        v13 += 4;
        v15 = *(_DWORD *)(v3 + 48) + 4 * v14++;
        v16 = *(_DWORD *)(v15 + 4);
        *(_BYTE *)(v13 - 8) = v16;
        *(_BYTE *)(v13 - 7) = BYTE1(v16);
        *(_BYTE *)(v13 - 6) = v16 >> 16;
        *(_BYTE *)(v13 - 5) = BYTE3(v16);
      }
      while ( *(_DWORD *)(v3 + 40) > v14 );
    }
  }
  if ( *(_DWORD *)(v3 + 56) > 0 )
  {
    *v2 = 34;
    v17 = v2 + 1;
    for ( k = *(_DWORD *)(v3 + 68); k > 0x7F; ++v17 )
    {
      v19 = k | 0x80;
      k >>= 7;
      *v17 = v19;
    }
    *v17 = k;
    v2 = v17 + 1;
    if ( *(_DWORD *)(v3 + 56) > 0 )
    {
      v20 = (int)(v17 + 5);
      v21 = 0;
      do
      {
        v2 = (_BYTE *)v20;
        v20 += 4;
        v22 = *(_DWORD *)(v3 + 64) + 4 * v21++;
        v23 = *(_DWORD *)(v22 + 4);
        *(_BYTE *)(v20 - 8) = v23;
        *(_BYTE *)(v20 - 7) = BYTE1(v23);
        *(_BYTE *)(v20 - 6) = v23 >> 16;
        *(_BYTE *)(v20 - 5) = BYTE3(v23);
      }
      while ( *(_DWORD *)(v3 + 56) > v21 );
    }
  }
  if ( *(_DWORD *)(v3 + 72) > 0 )
  {
    *v2 = 42;
    v24 = v2 + 1;
    for ( l = *(_DWORD *)(v3 + 84); l > 0x7F; ++v24 )
    {
      v26 = l | 0x80;
      l >>= 7;
      *v24 = v26;
    }
    *v24 = l;
    v2 = v24 + 1;
    if ( *(_DWORD *)(v3 + 72) > 0 )
    {
      v27 = (int)(v24 + 5);
      v28 = 0;
      do
      {
        v2 = (_BYTE *)v27;
        v27 += 4;
        v29 = *(_DWORD *)(v3 + 80) + 4 * v28++;
        v30 = *(_DWORD *)(v29 + 4);
        *(_BYTE *)(v27 - 8) = v30;
        *(_BYTE *)(v27 - 7) = BYTE1(v30);
        *(_BYTE *)(v27 - 6) = v30 >> 16;
        *(_BYTE *)(v27 - 5) = BYTE3(v30);
      }
      while ( *(_DWORD *)(v3 + 72) > v28 );
    }
  }
  if ( *(_DWORD *)(v3 + 88) > 0 )
  {
    *v2 = 50;
    v31 = v2 + 1;
    for ( m = *(_DWORD *)(v3 + 100); m > 0x7F; ++v31 )
    {
      v33 = m | 0x80;
      m >>= 7;
      *v31 = v33;
    }
    *v31 = m;
    v2 = v31 + 1;
    if ( *(_DWORD *)(v3 + 88) > 0 )
    {
      v34 = 0;
      do
      {
        v35 = *(_DWORD *)(v3 + 96) + v34++;
        *v2++ = *(_BYTE *)(v35 + 4);
      }
      while ( *(_DWORD *)(v3 + 88) > v34 );
    }
  }
  if ( *(_DWORD *)(v3 + 104) > 0 )
  {
    *v2 = 58;
    v36 = v2 + 1;
    for ( n = *(_DWORD *)(v3 + 116); n > 0x7F; ++v36 )
    {
      v38 = n | 0x80;
      n >>= 7;
      *v36 = v38;
    }
    *v36 = n;
    v2 = v36 + 1;
    if ( *(_DWORD *)(v3 + 104) > 0 )
    {
      v39 = 0;
      do
      {
        v40 = *(_DWORD *)(v3 + 112) + v39++;
        *v2++ = *(_BYTE *)(v40 + 4);
      }
      while ( *(_DWORD *)(v3 + 104) > v39 );
    }
  }
  if ( *(_DWORD *)(v3 + 120) > 0 )
  {
    *v2 = 66;
    v41 = v2 + 1;
    for ( ii = *(_DWORD *)(v3 + 132); ii > 0x7F; ++v41 )
    {
      v43 = ii | 0x80;
      ii >>= 7;
      *v41 = v43;
    }
    *v41 = ii;
    v2 = v41 + 1;
    if ( *(_DWORD *)(v3 + 120) > 0 )
    {
      v44 = 0;
      do
      {
        v45 = *(_DWORD *)(v3 + 128) + v44++;
        *v2++ = *(_BYTE *)(v45 + 4);
      }
      while ( *(_DWORD *)(v3 + 120) > v44 );
    }
  }
  return v2;
}
