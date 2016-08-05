int __fastcall sub_3F7E4(int a1)
{
  int v1; // r5@1
  int v2; // r6@2
  int v3; // r1@4
  int v4; // r4@5
  signed int v5; // r7@5
  signed int v6; // r2@7
  signed int v7; // r0@7
  int v8; // r0@9
  int v9; // r0@12
  int v10; // r3@15
  int v11; // r4@15
  int v12; // r6@15
  int v13; // r0@17
  int v14; // r7@20
  int v15; // r4@20
  int v16; // r7@20
  int v17; // r0@22
  int v18; // r6@25
  int v19; // r4@25
  int v20; // r6@25
  int v21; // r0@27
  signed int v22; // r3@30
  int v23; // r4@30
  int v24; // r0@32
  signed int v25; // r7@35
  int v26; // r4@35
  int v27; // r0@37
  signed int v28; // r6@40
  int v29; // r4@40
  int v30; // r0@42
  int result; // r0@45
  signed int v32; // ST04_4@33
  int v33; // r0@33

  v1 = a1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = sub_115284() + 1;
  else
    v2 = 0;
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = 10;
        v7 = *(_DWORD *)(*(_DWORD *)(v1 + 32) + 4 * v4 + 4);
        if ( v7 >= 0 )
        {
          v6 = 1;
          if ( v7 > 127 )
            break;
        }
        ++v4;
        v5 += v6;
        if ( v3 <= v4 )
          goto LABEL_10;
      }
      v8 = sub_11525C(v7);
      v3 = *(_DWORD *)(v1 + 24);
      ++v4;
      v5 += v8;
    }
    while ( v3 > v4 );
LABEL_10:
    if ( v5 > 0 )
    {
      if ( v5 > 127 )
        v9 = sub_11525C(v5) + 1;
      else
        v9 = 2;
      v2 += v9;
    }
  }
  v10 = *(_DWORD *)(v1 + 40);
  v11 = v2 + v5;
  *(_DWORD *)(v1 + 36) = v5;
  v12 = 4 * v10;
  if ( 4 * v10 > 0 )
  {
    if ( v12 > 127 )
      v13 = sub_11525C(4 * v10) + 1;
    else
      v13 = 2;
    v11 += v13;
  }
  v14 = *(_DWORD *)(v1 + 56);
  v15 = v11 + v12;
  *(_DWORD *)(v1 + 52) = v12;
  v16 = 4 * v14;
  if ( v16 > 0 )
  {
    if ( v16 > 127 )
      v17 = sub_11525C(v16) + 1;
    else
      v17 = 2;
    v15 += v17;
  }
  v18 = *(_DWORD *)(v1 + 72);
  v19 = v15 + v16;
  *(_DWORD *)(v1 + 68) = v16;
  v20 = 4 * v18;
  if ( v20 > 0 )
  {
    if ( v20 > 127 )
      v21 = sub_11525C(v20) + 1;
    else
      v21 = 2;
    v19 += v21;
  }
  v22 = *(_DWORD *)(v1 + 88);
  v23 = v19 + v20;
  *(_DWORD *)(v1 + 84) = v20;
  if ( v22 > 0 )
  {
    if ( v22 > 127 )
    {
      v32 = v22;
      v33 = sub_11525C(v22);
      v22 = v32;
      v24 = v33 + 1;
    }
    else
    {
      v24 = 2;
    }
    v23 += v24;
  }
  v25 = *(_DWORD *)(v1 + 104);
  v26 = v23 + v22;
  *(_DWORD *)(v1 + 100) = v22;
  if ( v25 > 0 )
  {
    if ( v25 > 127 )
      v27 = sub_11525C(v25) + 1;
    else
      v27 = 2;
    v26 += v27;
  }
  v28 = *(_DWORD *)(v1 + 120);
  v29 = v26 + v25;
  *(_DWORD *)(v1 + 116) = v25;
  if ( v28 > 0 )
  {
    if ( v28 > 127 )
      v30 = sub_11525C(v28) + 1;
    else
      v30 = 2;
    v29 += v30;
  }
  result = v29 + v28;
  *(_DWORD *)(v1 + 132) = v28;
  *(_DWORD *)(v1 + 136) = v29 + v28;
  return result;
}
