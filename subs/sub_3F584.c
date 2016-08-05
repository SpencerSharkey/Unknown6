int __fastcall sub_3F584(int a1)
{
  int v1; // r5@1
  int v2; // r4@2
  signed int v3; // r0@4
  int v4; // r0@6
  signed int v5; // r0@11
  int v6; // r0@13
  signed int v7; // r0@18
  int v8; // r0@20
  signed int v9; // r0@25
  int v10; // r0@27
  signed int v11; // r0@32
  int v12; // r0@34
  signed int v13; // r0@39
  int v14; // r0@41
  signed int v15; // r0@46
  int v16; // r0@48
  signed int v17; // r0@53
  int v18; // r0@55

  v1 = a1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = sub_115284() + 1;
  else
    v2 = 0;
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 )
  {
    if ( v3 >= 0 )
    {
      if ( v3 > 127 )
        v4 = sub_11525C(v3) + 1;
      else
        v4 = 2;
    }
    else
    {
      v4 = 11;
    }
    v2 += v4;
  }
  v5 = *(_DWORD *)(v1 + 28);
  if ( v5 )
  {
    if ( v5 >= 0 )
    {
      if ( v5 > 127 )
        v6 = sub_11525C(v5) + 1;
      else
        v6 = 2;
    }
    else
    {
      v6 = 11;
    }
    v2 += v6;
  }
  v7 = *(_DWORD *)(v1 + 32);
  if ( v7 )
  {
    if ( v7 >= 0 )
    {
      if ( v7 > 127 )
        v8 = sub_11525C(v7) + 1;
      else
        v8 = 2;
    }
    else
    {
      v8 = 11;
    }
    v2 += v8;
  }
  v9 = *(_DWORD *)(v1 + 36);
  if ( v9 )
  {
    if ( v9 >= 0 )
    {
      if ( v9 > 127 )
        v10 = sub_11525C(v9) + 1;
      else
        v10 = 2;
    }
    else
    {
      v10 = 11;
    }
    v2 += v10;
  }
  v11 = *(_DWORD *)(v1 + 40);
  if ( v11 )
  {
    if ( v11 >= 0 )
    {
      if ( v11 > 127 )
        v12 = sub_11525C(v11) + 1;
      else
        v12 = 2;
    }
    else
    {
      v12 = 11;
    }
    v2 += v12;
  }
  v13 = *(_DWORD *)(v1 + 44);
  if ( v13 )
  {
    if ( v13 >= 0 )
    {
      if ( v13 > 127 )
        v14 = sub_11525C(v13) + 1;
      else
        v14 = 2;
    }
    else
    {
      v14 = 11;
    }
    v2 += v14;
  }
  v15 = *(_DWORD *)(v1 + 48);
  if ( v15 )
  {
    if ( v15 >= 0 )
    {
      if ( v15 > 127 )
        v16 = sub_11525C(v15) + 1;
      else
        v16 = 2;
    }
    else
    {
      v16 = 11;
    }
    v2 += v16;
  }
  v17 = *(_DWORD *)(v1 + 52);
  if ( v17 )
  {
    if ( v17 >= 0 )
    {
      if ( v17 > 127 )
        v18 = sub_11525C(v17) + 1;
      else
        v18 = 2;
    }
    else
    {
      v18 = 11;
    }
    v2 += v18;
  }
  *(_DWORD *)(v1 + 56) = v2;
  return v2;
}
