int __fastcall sub_403E0(int a1, _BYTE *a2)
{
  _BYTE *v2; // r2@1
  int v3; // r4@1
  unsigned int v4; // r0@3
  unsigned int v5; // r0@4
  unsigned int v6; // r0@5
  unsigned int v7; // r0@6
  unsigned int v8; // r0@7
  unsigned int v9; // r0@8
  signed int v10; // r0@9
  unsigned int v11; // r0@10
  int result; // r0@11
  _BYTE *v13; // r2@12
  char v14; // r3@14
  _BYTE *v15; // r2@16
  unsigned int v16; // r3@17
  char v17; // r1@18
  _BYTE *v18; // r2@20
  char v19; // r3@22
  _BYTE *v20; // r2@24
  char v21; // r3@26
  _BYTE *v22; // r2@28
  char v23; // r3@30
  _BYTE *v24; // r2@32
  char v25; // r3@34
  _BYTE *v26; // r2@36
  char v27; // r3@38
  _BYTE *v28; // r2@40
  char v29; // r3@42

  v2 = a2;
  v3 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *a2 = 8;
    v2 = (_BYTE *)sub_114D9C();
  }
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 )
  {
    *v2 = 16;
    v28 = v2 + 1;
    if ( (v4 & 0x80000000) != 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      if ( (signed int)v4 > 127 )
      {
        do
        {
          v29 = v4 | 0x80;
          v4 >>= 7;
          *v28++ = v29;
        }
        while ( v4 > 0x7F );
      }
      *v28 = v4;
      v2 = v28 + 1;
    }
  }
  v5 = *(_DWORD *)(v3 + 28);
  if ( v5 )
  {
    *v2 = 24;
    v26 = v2 + 1;
    if ( (v5 & 0x80000000) != 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      if ( (signed int)v5 > 127 )
      {
        do
        {
          v27 = v5 | 0x80;
          v5 >>= 7;
          *v26++ = v27;
        }
        while ( v5 > 0x7F );
      }
      *v26 = v5;
      v2 = v26 + 1;
    }
  }
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 )
  {
    *v2 = 32;
    v24 = v2 + 1;
    if ( (v6 & 0x80000000) != 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      if ( (signed int)v6 > 127 )
      {
        do
        {
          v25 = v6 | 0x80;
          v6 >>= 7;
          *v24++ = v25;
        }
        while ( v6 > 0x7F );
      }
      *v24 = v6;
      v2 = v24 + 1;
    }
  }
  v7 = *(_DWORD *)(v3 + 36);
  if ( v7 )
  {
    *v2 = 40;
    v22 = v2 + 1;
    if ( (v7 & 0x80000000) != 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      if ( (signed int)v7 > 127 )
      {
        do
        {
          v23 = v7 | 0x80;
          v7 >>= 7;
          *v22++ = v23;
        }
        while ( v7 > 0x7F );
      }
      *v22 = v7;
      v2 = v22 + 1;
    }
  }
  v8 = *(_DWORD *)(v3 + 40);
  if ( v8 )
  {
    *v2 = 48;
    v20 = v2 + 1;
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
          v21 = v8 | 0x80;
          v8 >>= 7;
          *v20++ = v21;
        }
        while ( v8 > 0x7F );
      }
      *v20 = v8;
      v2 = v20 + 1;
    }
  }
  v9 = *(_DWORD *)(v3 + 44);
  if ( v9 )
  {
    *v2 = 56;
    v18 = v2 + 1;
    if ( (v9 & 0x80000000) != 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      if ( (signed int)v9 > 127 )
      {
        do
        {
          v19 = v9 | 0x80;
          v9 >>= 7;
          *v18++ = v19;
        }
        while ( v9 > 0x7F );
      }
      *v18 = v9;
      v2 = v18 + 1;
    }
  }
  v10 = *(_DWORD *)(v3 + 48);
  if ( v10 )
  {
    *v2 = 64;
    v15 = v2 + 1;
    if ( v10 < 0 )
    {
      v2 = (_BYTE *)sub_114D9C();
    }
    else
    {
      v16 = v10;
      if ( v10 > 127 )
      {
        do
        {
          v17 = v16 | 0x80;
          v16 >>= 7;
          *v15++ = v17;
        }
        while ( v16 > 0x7F );
      }
      *v15 = v16;
      v2 = v15 + 1;
    }
  }
  v11 = *(_DWORD *)(v3 + 52);
  if ( v11 )
  {
    *v2 = 72;
    v13 = v2 + 1;
    if ( (v11 & 0x80000000) != 0 )
    {
      result = sub_114D9C();
    }
    else
    {
      if ( (signed int)v11 > 127 )
      {
        do
        {
          v14 = v11 | 0x80;
          v11 >>= 7;
          *v13++ = v14;
        }
        while ( v11 > 0x7F );
      }
      *v13 = v11;
      result = (int)(v13 + 1);
    }
  }
  else
  {
    result = (int)v2;
  }
  return result;
}
