int __fastcall sub_40640(int a1, int a2)
{
  int v2; // r5@1
  int *v3; // r3@1
  int v4; // r4@1
  int v5; // r1@1
  const void **v6; // r0@2
  int *v7; // r3@3
  int v8; // r1@3
  const void **v9; // r0@4
  int *v10; // r3@5
  int v11; // r1@5
  const void **v12; // r0@6
  int *v13; // r3@7
  int v14; // r1@7
  const void **v15; // r0@8
  int *v16; // r3@9
  int v17; // r1@9
  const void **v18; // r0@10
  int *v19; // r3@11
  int v20; // r1@11
  const void **v21; // r0@12
  int *v22; // r3@13
  int v23; // r1@13
  const void **v24; // r0@14
  int *v25; // r3@15
  int v26; // r1@15
  const void **v27; // r0@16
  int *v28; // r3@17
  int v29; // r1@17
  const void **v30; // r0@18
  int *v31; // r3@19
  int v32; // r1@19
  const void **v33; // r0@20
  int *v34; // r3@21
  int v35; // r1@21
  const void **v36; // r0@22
  int *v37; // r3@23
  int v38; // r1@23
  const void **v39; // r0@24
  int *v40; // r3@25
  int v41; // r1@25
  int result; // r0@26
  const void **v43; // r0@27

  v2 = a1;
  v3 = *(int **)(a1 + 12);
  v4 = a2;
  v5 = *(_DWORD *)(*v3 - 12);
  if ( v5 )
  {
    WireFormat::VerifyUTF8StringFallback(*v3, v5, 1, dword_1F8574);
    v6 = *(const void ***)(v2 + 12);
    *(_BYTE *)v4 = 10;
    v4 = sub_1152FC(v6, (_BYTE *)(v4 + 1));
  }
  v7 = *(int **)(v2 + 16);
  v8 = *(_DWORD *)(*v7 - 12);
  if ( v8 )
  {
    WireFormat::VerifyUTF8StringFallback(*v7, v8, 1, dword_1F8578);
    v9 = *(const void ***)(v2 + 16);
    *(_BYTE *)v4 = 18;
    v4 = sub_1152FC(v9, (_BYTE *)(v4 + 1));
  }
  v10 = *(int **)(v2 + 20);
  v11 = *(_DWORD *)(*v10 - 12);
  if ( v11 )
  {
    WireFormat::VerifyUTF8StringFallback(*v10, v11, 1, dword_1F857C);
    v12 = *(const void ***)(v2 + 20);
    *(_BYTE *)v4 = 26;
    v4 = sub_1152FC(v12, (_BYTE *)(v4 + 1));
  }
  v13 = *(int **)(v2 + 24);
  v14 = *(_DWORD *)(*v13 - 12);
  if ( v14 )
  {
    WireFormat::VerifyUTF8StringFallback(*v13, v14, 1, dword_1F8580);
    v15 = *(const void ***)(v2 + 24);
    *(_BYTE *)v4 = 34;
    v4 = sub_1152FC(v15, (_BYTE *)(v4 + 1));
  }
  v16 = *(int **)(v2 + 28);
  v17 = *(_DWORD *)(*v16 - 12);
  if ( v17 )
  {
    WireFormat::VerifyUTF8StringFallback(*v16, v17, 1, dword_1F8584);
    v18 = *(const void ***)(v2 + 28);
    *(_BYTE *)v4 = 42;
    v4 = sub_1152FC(v18, (_BYTE *)(v4 + 1));
  }
  v19 = *(int **)(v2 + 32);
  v20 = *(_DWORD *)(*v19 - 12);
  if ( v20 )
  {
    WireFormat::VerifyUTF8StringFallback(*v19, v20, 1, dword_1F8588);
    v21 = *(const void ***)(v2 + 32);
    *(_BYTE *)v4 = 50;
    v4 = sub_1152FC(v21, (_BYTE *)(v4 + 1));
  }
  v22 = *(int **)(v2 + 36);
  v23 = *(_DWORD *)(*v22 - 12);
  if ( v23 )
  {
    WireFormat::VerifyUTF8StringFallback(*v22, v23, 1, dword_1F858C);
    v24 = *(const void ***)(v2 + 36);
    *(_BYTE *)v4 = 58;
    v4 = sub_1152FC(v24, (_BYTE *)(v4 + 1));
  }
  v25 = *(int **)(v2 + 40);
  v26 = *(_DWORD *)(*v25 - 12);
  if ( v26 )
  {
    WireFormat::VerifyUTF8StringFallback(*v25, v26, 1, dword_1F8590);
    v27 = *(const void ***)(v2 + 40);
    *(_BYTE *)v4 = 66;
    v4 = sub_1152FC(v27, (_BYTE *)(v4 + 1));
  }
  v28 = *(int **)(v2 + 44);
  v29 = *(_DWORD *)(*v28 - 12);
  if ( v29 )
  {
    WireFormat::VerifyUTF8StringFallback(*v28, v29, 1, dword_1F8594);
    v30 = *(const void ***)(v2 + 44);
    *(_BYTE *)v4 = 74;
    v4 = sub_1152FC(v30, (_BYTE *)(v4 + 1));
  }
  v31 = *(int **)(v2 + 48);
  v32 = *(_DWORD *)(*v31 - 12);
  if ( v32 )
  {
    WireFormat::VerifyUTF8StringFallback(*v31, v32, 1, dword_1F8598);
    v33 = *(const void ***)(v2 + 48);
    *(_BYTE *)v4 = 82;
    v4 = sub_1152FC(v33, (_BYTE *)(v4 + 1));
  }
  v34 = *(int **)(v2 + 52);
  v35 = *(_DWORD *)(*v34 - 12);
  if ( v35 )
  {
    WireFormat::VerifyUTF8StringFallback(*v34, v35, 1, dword_1F859C);
    v36 = *(const void ***)(v2 + 52);
    *(_BYTE *)v4 = 98;
    v4 = sub_1152FC(v36, (_BYTE *)(v4 + 1));
  }
  v37 = *(int **)(v2 + 56);
  v38 = *(_DWORD *)(*v37 - 12);
  if ( v38 )
  {
    WireFormat::VerifyUTF8StringFallback(*v37, v38, 1, dword_1F85A0);
    v39 = *(const void ***)(v2 + 56);
    *(_BYTE *)v4 = 106;
    v4 = sub_1152FC(v39, (_BYTE *)(v4 + 1));
  }
  v40 = *(int **)(v2 + 60);
  v41 = *(_DWORD *)(*v40 - 12);
  if ( v41 )
  {
    WireFormat::VerifyUTF8StringFallback(*v40, v41, 1, dword_1F85A4);
    v43 = *(const void ***)(v2 + 60);
    *(_BYTE *)v4 = 114;
    result = sub_1152FC(v43, (_BYTE *)(v4 + 1));
  }
  else
  {
    result = v4;
  }
  return result;
}
