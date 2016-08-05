int __fastcall sub_3FE3C(int a1)
{
  int v1; // r4@1
  int v2; // r5@2
  _DWORD *v3; // r6@4
  unsigned int v4; // r3@4
  int v5; // r0@6
  unsigned int v6; // r0@11
  unsigned int v7; // r6@11
  int v8; // r0@12
  unsigned int v9; // r0@16
  unsigned int v10; // r6@16
  int v11; // r0@17
  signed int v12; // r0@20
  int v13; // r0@22
  signed int v14; // r0@31
  int v15; // r0@33
  signed int v16; // r0@38
  int v17; // r0@40
  _DWORD *v18; // r6@45
  unsigned int v19; // r3@45
  int v20; // r0@47
  signed int v21; // r0@50
  int v22; // r0@52
  _DWORD *v23; // r6@57
  unsigned int v24; // r3@57
  int v25; // r0@59
  _DWORD *v26; // r6@62
  unsigned int v27; // r3@62
  int v28; // r0@64
  signed int v29; // r0@69
  int v30; // r0@71
  _DWORD *v31; // r6@78
  unsigned int v32; // r3@78
  int v33; // r0@80
  int v34; // r1@85
  int v35; // r5@85
  int v36; // r6@86
  _DWORD *v37; // r7@88
  unsigned int v38; // r0@88
  int v39; // r0@89
  int v40; // r3@90
  int v41; // r5@90
  int v42; // r6@91
  unsigned int v43; // r0@93
  int v44; // r3@95
  int v45; // r5@95
  int v46; // r6@96
  unsigned int v47; // r0@98
  int v48; // r3@100
  int v49; // r5@100
  int v50; // r6@101
  unsigned int v51; // r0@103
  int v52; // r3@105
  int v53; // r5@105
  int v54; // r6@106
  unsigned int v55; // r0@108
  int v56; // r3@111
  signed int v57; // r7@111
  int v58; // r6@112
  __int64 v59; // r0@112
  int v60; // r0@112
  int v61; // r0@115
  int result; // r0@118

  v1 = a1;
  if ( *(_QWORD *)(a1 + 32) )
    v2 = ((int (*)(void))sub_115284)() + 1;
  else
    v2 = 0;
  v3 = *(_DWORD **)(v1 + 40);
  v4 = *(_DWORD *)(*v3 - 12);
  if ( v4 )
  {
    if ( v4 > 0x7F )
    {
      v5 = sub_11525C(*(_DWORD *)(*v3 - 12));
      v4 = *(_DWORD *)(*v3 - 12);
    }
    else
    {
      v5 = 1;
    }
    v2 += v4 + v5 + 1;
  }
  if ( !*(_BYTE *)(v1 + 8) )
  {
    if ( !*(_DWORD *)(v1 + 108)
      || ((v6 = sub_3EAAC(), v7 = v6, v6 > 0x7F) ? (v8 = sub_11525C(v6)) : (v8 = 1),
          v2 += v7 + v8 + 1,
          !*(_BYTE *)(v1 + 8)) )
    {
      if ( *(_DWORD *)(v1 + 112) )
      {
        v9 = sub_3E8B0();
        v10 = v9;
        if ( v9 > 0x7F )
          v11 = sub_11525C(v9);
        else
          v11 = 1;
        v2 += v10 + v11 + 1;
      }
    }
  }
  v12 = *(_DWORD *)(v1 + 116);
  if ( v12 )
  {
    if ( v12 >= 0 )
    {
      if ( v12 > 127 )
        v13 = sub_11525C(v12) + 1;
      else
        v13 = 2;
    }
    else
    {
      v13 = 11;
    }
    v2 += v13;
  }
  if ( *(_BYTE *)(v1 + 132) )
    v2 += 2;
  if ( *(_BYTE *)(v1 + 133) )
    v2 += 2;
  v14 = *(_DWORD *)(v1 + 120);
  if ( v14 )
  {
    if ( v14 >= 0 )
    {
      if ( v14 > 127 )
        v15 = sub_11525C(v14) + 1;
      else
        v15 = 2;
    }
    else
    {
      v15 = 11;
    }
    v2 += v15;
  }
  v16 = *(_DWORD *)(v1 + 128);
  if ( v16 )
  {
    if ( v16 >= 0 )
    {
      if ( v16 > 127 )
        v17 = sub_11525C(v16) + 1;
      else
        v17 = 2;
    }
    else
    {
      v17 = 11;
    }
    v2 += v17;
  }
  v18 = *(_DWORD **)(v1 + 124);
  v19 = *(_DWORD *)(*v18 - 12);
  if ( v19 )
  {
    if ( v19 > 0x7F )
    {
      v20 = sub_11525C(*(_DWORD *)(*v18 - 12));
      v19 = *(_DWORD *)(*v18 - 12);
    }
    else
    {
      v20 = 1;
    }
    v2 += v19 + v20 + 1;
  }
  v21 = *(_DWORD *)(v1 + 144);
  if ( v21 )
  {
    if ( v21 >= 0 )
    {
      if ( v21 > 127 )
        v22 = sub_11525C(v21) + 2;
      else
        v22 = 3;
    }
    else
    {
      v22 = 12;
    }
    v2 += v22;
  }
  v23 = *(_DWORD **)(v1 + 136);
  v24 = *(_DWORD *)(*v23 - 12);
  if ( v24 )
  {
    if ( v24 > 0x7F )
    {
      v25 = sub_11525C(*(_DWORD *)(*v23 - 12));
      v24 = *(_DWORD *)(*v23 - 12);
    }
    else
    {
      v25 = 1;
    }
    v2 += v24 + v25 + 2;
  }
  v26 = *(_DWORD **)(v1 + 140);
  v27 = *(_DWORD *)(*v26 - 12);
  if ( v27 )
  {
    if ( v27 > 0x7F )
    {
      v28 = sub_11525C(*(_DWORD *)(*v26 - 12));
      v27 = *(_DWORD *)(*v26 - 12);
    }
    else
    {
      v28 = 1;
    }
    v2 += v27 + v28 + 2;
  }
  if ( *(_BYTE *)(v1 + 134) )
    v2 += 3;
  v29 = *(_DWORD *)(v1 + 148);
  if ( v29 )
  {
    if ( v29 >= 0 )
    {
      if ( v29 > 127 )
        v30 = sub_11525C(v29) + 2;
      else
        v30 = 3;
    }
    else
    {
      v30 = 12;
    }
    v2 += v30;
  }
  if ( *(_BYTE *)(v1 + 135) )
    v2 += 3;
  v31 = *(_DWORD **)(v1 + 152);
  v32 = *(_DWORD *)(*v31 - 12);
  if ( v32 )
  {
    if ( v32 > 0x7F )
    {
      v33 = sub_11525C(*(_DWORD *)(*v31 - 12));
      v32 = *(_DWORD *)(*v31 - 12);
    }
    else
    {
      v33 = 1;
    }
    v2 += v32 + v33 + 2;
  }
  if ( *(_QWORD *)(v1 + 160) )
    v2 += ((int (*)(void))sub_115284)() + 2;
  v34 = *(_DWORD *)(v1 + 16);
  v35 = v2 + v34;
  if ( v34 > 0 )
  {
    v36 = 0;
    do
    {
      while ( 1 )
      {
        v37 = *(_DWORD **)(*(_DWORD *)(v1 + 24) + 4 * v36 + 4);
        v38 = *(_DWORD *)(*v37 - 12);
        if ( v38 > 0x7F )
          break;
        ++v36;
        v35 += v38 + 1;
        if ( v34 <= v36 )
          goto LABEL_90;
      }
      v39 = sub_11525C(v38);
      v34 = *(_DWORD *)(v1 + 16);
      ++v36;
      v35 += v39 + *(_DWORD *)(*v37 - 12);
    }
    while ( v34 > v36 );
  }
LABEL_90:
  v40 = *(_DWORD *)(v1 + 48);
  v41 = v35 + v40;
  if ( v40 > 0 )
  {
    v42 = 0;
    do
    {
      while ( 1 )
      {
        v43 = sub_3F480(*(_DWORD *)(*(_DWORD *)(v1 + 56) + 4 * v42 + 4));
        if ( v43 > 0x7F )
          break;
        ++v42;
        v41 += v43 + 1;
        if ( *(_DWORD *)(v1 + 48) <= v42 )
          goto LABEL_95;
      }
      ++v42;
      v41 += sub_11525C(v43) + v43;
    }
    while ( *(_DWORD *)(v1 + 48) > v42 );
  }
LABEL_95:
  v44 = *(_DWORD *)(v1 + 64);
  v45 = v41 + v44;
  if ( v44 > 0 )
  {
    v46 = 0;
    do
    {
      while ( 1 )
      {
        v47 = sub_3F7E4(*(_DWORD *)(*(_DWORD *)(v1 + 72) + 4 * v46 + 4));
        if ( v47 > 0x7F )
          break;
        ++v46;
        v45 += v47 + 1;
        if ( *(_DWORD *)(v1 + 64) <= v46 )
          goto LABEL_100;
      }
      ++v46;
      v45 += sub_11525C(v47) + v47;
    }
    while ( *(_DWORD *)(v1 + 64) > v46 );
  }
LABEL_100:
  v48 = *(_DWORD *)(v1 + 80);
  v49 = v45 + v48;
  if ( v48 > 0 )
  {
    v50 = 0;
    do
    {
      while ( 1 )
      {
        v51 = sub_3F584(*(_DWORD *)(*(_DWORD *)(v1 + 88) + 4 * v50 + 4));
        if ( v51 > 0x7F )
          break;
        ++v50;
        v49 += v51 + 1;
        if ( *(_DWORD *)(v1 + 80) <= v50 )
          goto LABEL_105;
      }
      ++v50;
      v49 += sub_11525C(v51) + v51;
    }
    while ( *(_DWORD *)(v1 + 80) > v50 );
  }
LABEL_105:
  v52 = *(_DWORD *)(v1 + 96);
  v53 = v49 + v52;
  if ( v52 > 0 )
  {
    v54 = 0;
    do
    {
      while ( 1 )
      {
        v55 = sub_3F694(*(_DWORD *)(*(_DWORD *)(v1 + 104) + 4 * v54 + 4));
        if ( v55 > 0x7F )
          break;
        ++v54;
        v53 += v55 + 1;
        if ( *(_DWORD *)(v1 + 96) <= v54 )
          goto LABEL_110;
      }
      ++v54;
      v53 += sub_11525C(v55) + v55;
    }
    while ( *(_DWORD *)(v1 + 96) > v54 );
  }
LABEL_110:
  if ( *(_DWORD *)(v1 + 168) <= 0 )
  {
    v57 = 0;
  }
  else
  {
    v56 = 0;
    v57 = 0;
    do
    {
      v58 = v56 + 1;
      v59 = *(_QWORD *)(*(_DWORD *)(v1 + 176) + 8 * (v56 + 1));
      v60 = sub_115284(v59, HIDWORD(v59));
      v56 = v58;
      v57 += v60;
    }
    while ( *(_DWORD *)(v1 + 168) > v58 );
    if ( v57 > 0 )
    {
      if ( v57 > 127 )
        v61 = sub_11525C(v57) + 2;
      else
        v61 = 3;
      v53 += v61;
    }
  }
  result = v53 + v57;
  *(_DWORD *)(v1 + 180) = v57;
  *(_DWORD *)(v1 + 184) = v53 + v57;
  return result;
}
