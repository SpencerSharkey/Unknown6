void __fastcall sub_1B7E44(const void **a1, size_t a2, int a3, int a4)
{
  size_t v4; // r6@1
  char *v5; // r4@1
  int v6; // r10@1
  const void **v7; // r9@1
  int v8; // r8@1
  int v9; // r5@1
  int v10; // r7@1
  unsigned int v11; // r5@1
  size_t v12; // r7@1
  int v13; // r0@3
  int v14; // r4@3
  void *v15; // r3@3
  void *v16; // r0@4
  const void *v17; // r1@4
  int v18; // r2@7
  int v19; // r6@7
  int v20; // r10@7
  char *v21; // r0@9
  bool v22; // zf@14
  int v23; // r10@17
  int v24; // r6@17
  char *v25; // r0@17
  char *v26; // r1@17
  void *v27; // ST04_4@22
  unsigned int *v28; // r1@23
  signed int v29; // r2@24
  void *v30; // ST04_4@26

  v4 = a2;
  v5 = (char *)*a1;
  v6 = a4;
  v7 = a1;
  v8 = a3;
  v9 = *((_DWORD *)*a1 - 3);
  v10 = v9 - a2;
  v11 = v9 + a4 - a3;
  v12 = v10 - a3;
  if ( v11 > *((_DWORD *)*a1 - 2) || *((_DWORD *)v5 - 1) > 0 )
  {
    v13 = basic_string::_S_create(v11);
    v14 = v13;
    v15 = (void *)(v13 + 12);
    if ( v4 )
    {
      v16 = (void *)(v13 + 12);
      v17 = *v7;
      if ( v4 != 1 )
      {
        v15 = memcpy(v16, v17, v4);
        if ( v12 )
        {
LABEL_7:
          v18 = v4 + 12;
          v19 = v4 + v8;
          v20 = v6 + v18;
          if ( v12 == 1 )
          {
            *(_BYTE *)(v14 + v20) = *((_BYTE *)*v7 + v19);
          }
          else
          {
            v27 = v15;
            memcpy((void *)(v14 + v20), (char *)*v7 + v19, v12);
            v15 = v27;
          }
        }
LABEL_9:
        v21 = (char *)*v7 - 12;
        if ( (_UNKNOWN *)v21 != &unk_200B34 )
        {
          v28 = (unsigned int *)((char *)*v7 - 4);
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          __dmb();
          if ( v29 <= 0 )
          {
            v30 = v15;
            operator delete(v21);
            v15 = v30;
          }
        }
        v5 = (char *)v15;
        *v7 = v15;
        goto LABEL_11;
      }
      v15 = (void *)(v14 + 12);
      *(_BYTE *)(v14 + 12) = *(_BYTE *)v17;
    }
    if ( v12 )
      goto LABEL_7;
    goto LABEL_9;
  }
  v22 = a3 == a4;
  if ( a3 != a4 )
    v22 = v12 == 0;
  if ( !v22 )
  {
    v23 = a4 + a2;
    v24 = a2 + a3;
    v25 = &v5[a4] + a2;
    v26 = &v5[a2] + a3;
    if ( v12 == 1 )
    {
      v5[v23] = v5[v24];
      v5 = (char *)*v7;
    }
    else
    {
      memmove(v25, v26, v12);
      v5 = (char *)*v7;
    }
  }
LABEL_11:
  if ( (_UNKNOWN *)(v5 - 12) != &unk_200B34 )
  {
    *((_DWORD *)v5 - 3) = v11;
    *((_DWORD *)v5 - 1) = 0;
    v5[v11] = 0;
  }
}
