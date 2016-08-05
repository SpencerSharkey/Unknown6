void __fastcall sub_11B8B4(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  pthread_mutex_t **v3; // r6@3
  int v4; // r4@3
  void *v5; // r3@3
  void *v6; // r2@3
  void *v7; // r0@8
  int v8; // r7@8
  int v9; // r3@9
  unsigned int v10; // r7@10
  void *v11; // r0@11
  void *v12; // r8@11
  int v13; // r9@11
  void *v14; // r3@15
  void *v15; // r1@15
  int v16; // r5@16
  int v17; // r3@19
  void **v18; // [sp+4h] [bp-2Ch]@2
  int (*v19)(); // [sp+8h] [bp-28h]@2
  char v20; // [sp+Ch] [bp-24h]@2

  v1 = a1;
  v2 = dword_1FA3F0;
  dword_1F7004(a1);
  if ( v2 != 2 )
  {
    v20 = 0;
    v19 = sub_11ACA4;
    v18 = &off_1F57D0;
    sub_11B9DC((int)&dword_1FA3F0, (int)&v18);
  }
  v3 = (pthread_mutex_t **)dword_1FA3E8;
  sub_11B678((pthread_mutex_t **)dword_1FA3E8);
  v4 = dword_1FA3E4;
  v5 = *(void **)(dword_1FA3E4 + 4);
  v6 = *(void **)(dword_1FA3E4 + 8);
  if ( v6 != v5 )
  {
    if ( v5 )
    {
      *(_DWORD *)v5 = v1;
      v5 = *(void **)(v4 + 4);
    }
    *(_DWORD *)(v4 + 4) = (char *)v5 + 4;
    goto LABEL_7;
  }
  v7 = *(void **)dword_1FA3E4;
  v8 = (signed int)((char *)v6 - *(_DWORD *)dword_1FA3E4) >> 2;
  if ( v8 )
  {
    v9 = 2 * v8;
    if ( v8 > (unsigned int)(2 * v8) || (unsigned int)v9 >= 0x40000000 )
    {
      v10 = -4;
    }
    else
    {
      v10 = 8 * v8;
      if ( !v9 )
      {
        v12 = 0;
        v13 = 4;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v10 = 4;
  }
  v11 = operator new(v10);
  v6 = *(void **)(v4 + 4);
  v12 = v11;
  v7 = *(void **)v4;
  v13 = (int)((char *)v12 + 4);
LABEL_12:
  if ( (char *)v12 + (_BYTE *)v6 - (_BYTE *)v7 )
  {
    *(_DWORD *)((char *)v12 + (_BYTE *)v6 - (_BYTE *)v7) = v1;
    v7 = *(void **)v4;
    v6 = *(void **)(v4 + 4);
  }
  if ( v6 != v7 )
  {
    v14 = v7;
    v15 = v12;
    do
    {
      v16 = *(_DWORD *)v14;
      v14 = (char *)v14 + 4;
      if ( v15 )
        *(_DWORD *)v15 = v16;
      v15 = (char *)v15 + 4;
    }
    while ( v6 != v14 );
    v17 = (int)((char *)v7 + 4);
    v7 = *(void **)v4;
    v13 = (int)((char *)v12 + ((unsigned int)((char *)v6 - v17) & 0xFFFFFFFC) + 8);
  }
  if ( v7 )
    operator delete(v7);
  *(_DWORD *)v4 = v12;
  *(_DWORD *)(v4 + 8) = (char *)v12 + v10;
  *(_DWORD *)(v4 + 4) = v13;
LABEL_7:
  sub_11ACE4(v3);
}