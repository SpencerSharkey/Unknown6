_DWORD *__fastcall sub_43B8C(int a1)
{
  int v1; // r4@1
  _DWORD *v2; // r0@1
  int v3; // r2@2
  int v4; // r3@3
  int v5; // r2@3
  unsigned int v6; // r5@4
  _DWORD *v7; // r0@7
  int v8; // r3@7
  int v9; // r2@8
  _DWORD *v10; // r0@9
  int v11; // r2@10
  _DWORD *v12; // r0@11
  int v13; // r2@12
  _DWORD *result; // r0@13
  int v15; // r2@14
  int v16; // r7@15
  int v17; // r6@16
  int v18; // r5@16
  _DWORD *v19; // t1@17
  int v20; // r2@17
  int v21; // r7@19
  int v22; // r6@20
  int v23; // r5@20
  int v24; // t1@21
  int v25; // r7@23
  int v26; // r6@24
  int v27; // r5@24
  int v28; // t1@25
  int v29; // r7@27
  int v30; // r6@28
  int v31; // r5@28
  int v32; // t1@29
  int v33; // r7@31
  int v34; // r6@32
  int v35; // r5@32
  int v36; // t1@33
  void *v37; // r7@36
  int (*v38)(); // r2@37
  int v39; // r3@40
  int v40; // r0@42

  v1 = a1;
  v2 = *(_DWORD **)(a1 + 40);
  *(_QWORD *)(v1 + 32) = 0LL;
  if ( (_DWORD *)dword_1FA36C != v2 )
  {
    v3 = *(_DWORD *)(*v2 - 12);
    sub_1B7E44();
  }
  v4 = *(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(v1 + 4) & 1;
  if ( v4 & 1 )
  {
    v6 = v4 & 0xFFFFFFFE;
    if ( *(_DWORD *)((v4 & 0xFFFFFFFE) + 4) )
    {
      *(_DWORD *)(v1 + 108) = 0;
      memset((void *)(v1 + 116), 0, 8u);
      memset((void *)(v1 + 128), 0, 6u);
      v39 = *(_DWORD *)(v6 + 4);
LABEL_41:
      if ( v39 )
        goto LABEL_7;
      goto LABEL_42;
    }
  }
  else
  {
    v6 = v4 & 0xFFFFFFFE;
    if ( v4 & 0xFFFFFFFE )
    {
      *(_DWORD *)(v1 + 108) = 0;
      memset((void *)(v1 + 116), 0, 8u);
      memset((void *)(v1 + 128), 0, 6u);
      goto LABEL_6;
    }
  }
  v37 = *(void **)(v1 + 108);
  if ( v37 )
  {
    v38 = *(int (**)())(*(_DWORD *)v37 + 4);
    if ( v38 == sub_43B78 )
    {
      sub_43B30(*(_DWORD *)(v1 + 108));
      operator delete(v37);
      v5 = *(_DWORD *)(v1 + 4) & 1;
      v6 = *(_DWORD *)(v1 + 4) & 0xFFFFFFFE;
    }
    else
    {
      ((void (__fastcall *)(_DWORD))v38)(*(_DWORD *)(v1 + 108));
      v5 = *(_DWORD *)(v1 + 4) & 1;
      v6 = *(_DWORD *)(v1 + 4) & 0xFFFFFFFE;
    }
  }
  *(_DWORD *)(v1 + 108) = 0;
  *(_BYTE *)(v1 + 116) = 0;
  *(_BYTE *)(v1 + 117) = 0;
  *(_BYTE *)(v1 + 118) = 0;
  *(_BYTE *)(v1 + 119) = 0;
  *(_BYTE *)(v1 + 120) = 0;
  *(_BYTE *)(v1 + 121) = 0;
  *(_BYTE *)(v1 + 122) = 0;
  *(_BYTE *)(v1 + 123) = 0;
  *(_BYTE *)(v1 + 128) = 0;
  *(_BYTE *)(v1 + 129) = 0;
  *(_BYTE *)(v1 + 130) = 0;
  *(_BYTE *)(v1 + 131) = 0;
  *(_BYTE *)(v1 + 132) = 0;
  *(_BYTE *)(v1 + 133) = 0;
  if ( v5 )
  {
    v39 = *(_DWORD *)(v6 + 4);
    goto LABEL_41;
  }
LABEL_6:
  if ( v6 )
    goto LABEL_7;
LABEL_42:
  v40 = *(_DWORD *)(v1 + 112);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
LABEL_7:
  v7 = *(_DWORD **)(v1 + 124);
  v8 = dword_1FA36C;
  *(_DWORD *)(v1 + 112) = 0;
  if ( (_DWORD *)v8 != v7 )
  {
    v9 = *(_DWORD *)(*v7 - 12);
    sub_1B7E44();
    v8 = dword_1FA36C;
  }
  v10 = *(_DWORD **)(v1 + 136);
  *(_DWORD *)(v1 + 144) = 0;
  *(_BYTE *)(v1 + 134) = 0;
  *(_BYTE *)(v1 + 135) = 0;
  if ( v10 != (_DWORD *)v8 )
  {
    v11 = *(_DWORD *)(*v10 - 12);
    sub_1B7E44();
    v8 = dword_1FA36C;
  }
  v12 = *(_DWORD **)(v1 + 140);
  if ( v12 != (_DWORD *)v8 )
  {
    v13 = *(_DWORD *)(*v12 - 12);
    sub_1B7E44();
    v8 = dword_1FA36C;
  }
  result = *(_DWORD **)(v1 + 152);
  *(_DWORD *)(v1 + 148) = 0;
  if ( result != (_DWORD *)v8 )
  {
    v15 = *(_DWORD *)(*result - 12);
    result = (_DWORD *)sub_1B7E44();
  }
  v16 = *(_DWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 160) = 0LL;
  if ( v16 > 0 )
  {
    v17 = *(_DWORD *)(v1 + 24);
    v18 = 0;
    do
    {
      v19 = *(_DWORD **)(v17 + 4);
      v17 += 4;
      ++v18;
      v20 = *(_DWORD *)(*v19 - 12);
      result = (_DWORD *)sub_1B7E44();
    }
    while ( v18 != v16 );
    *(_DWORD *)(v1 + 16) = 0;
  }
  v21 = *(_DWORD *)(v1 + 48);
  if ( v21 > 0 )
  {
    v22 = *(_DWORD *)(v1 + 56);
    v23 = 0;
    do
    {
      v24 = *(_DWORD *)(v22 + 4);
      v22 += 4;
      ++v23;
      result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v24 + 28))();
    }
    while ( v23 != v21 );
    *(_DWORD *)(v1 + 48) = 0;
  }
  v25 = *(_DWORD *)(v1 + 64);
  if ( v25 > 0 )
  {
    v26 = *(_DWORD *)(v1 + 72);
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(v26 + 4);
      v26 += 4;
      ++v27;
      result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v28 + 28))();
    }
    while ( v27 != v25 );
    *(_DWORD *)(v1 + 64) = 0;
  }
  v29 = *(_DWORD *)(v1 + 80);
  if ( v29 > 0 )
  {
    v30 = *(_DWORD *)(v1 + 88);
    v31 = 0;
    do
    {
      v32 = *(_DWORD *)(v30 + 4);
      v30 += 4;
      ++v31;
      result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v32 + 28))();
    }
    while ( v31 != v29 );
    *(_DWORD *)(v1 + 80) = 0;
  }
  v33 = *(_DWORD *)(v1 + 96);
  if ( v33 > 0 )
  {
    v34 = *(_DWORD *)(v1 + 104);
    v35 = 0;
    do
    {
      v36 = *(_DWORD *)(v34 + 4);
      v34 += 4;
      ++v35;
      result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v36 + 28))();
    }
    while ( v35 != v33 );
    *(_DWORD *)(v1 + 96) = 0;
  }
  *(_DWORD *)(v1 + 168) = 0;
  return result;
}
