void __fastcall sub_564C8(int a1, int a2)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r3@2
  signed __int64 v7; // r0@5
  int v8; // r3@6
  int v9; // r6@7
  int v10; // r7@8
  unsigned int v11; // r0@8
  size_t v12; // r8@8
  __int64 v13; // r0@10
  unsigned int v14; // r3@10
  unsigned int v15; // lr@10
  unsigned int v16; // r6@10
  unsigned int v17; // lr@10
  unsigned int v18; // r3@10
  unsigned int v19; // lr@10
  unsigned int v20; // r12@10
  unsigned int v21; // r6@10
  unsigned int v22; // lr@10
  unsigned int v23; // r3@10
  int v24; // r0@10
  unsigned int v25; // r3@10
  int v26; // r7@14
  int v27; // lr@17
  int v28; // r12@17
  int v29; // r2@18
  int v30; // r3@18
  __int64 v31; // t1@18
  char *v32; // r11@19
  unsigned int v33; // r10@19
  int v34; // r0@19
  int *v35; // r9@19
  char *v36; // r0@19
  int v37; // r0@21
  int v38; // r5@21
  int v39; // r7@21
  void *v40; // r0@23
  int v41; // r0@24
  int v42; // r1@24
  int v43; // r7@25
  int v44; // r2@26
  int v45; // r3@26
  int v46; // t1@28
  int v47; // r3@31
  int v48; // r2@32
  int v49; // r0@33
  int v50; // r2@33
  int v51; // r3@33
  unsigned int *v52; // r3@37
  unsigned int v53; // r2@38
  int v54; // r9@45
  int v55; // r9@45
  int v56; // r8@46
  char *v57; // r6@46
  __int64 v58; // r0@47
  __int64 v59; // r2@47
  int v60; // r3@52
  int v61; // r5@52
  int v62; // r0@52
  int (*v63)(); // r2@52
  int v64; // r10@52
  unsigned int v65; // r2@53
  void *v66; // r7@54
  pthread_mutex_t *v67; // ST10_4@55
  void *v68; // r0@55
  unsigned int v69; // r1@59
  unsigned int v70; // r0@60
  unsigned int v71; // r1@61
  __int64 v72; // ST30_8@62
  pthread_mutex_t *v73; // ST10_4@62
  char *v74; // r0@62
  char *v75; // r10@62
  int v76; // r0@62
  char *v77; // r6@63
  char *v78; // r6@66
  char *v79; // r0@66
  char *v80; // r0@72
  void *v81; // ST04_4@72
  __int64 v87; // r0@77
  unsigned int *v88; // r3@80
  unsigned int v89; // r2@81
  unsigned int *v90; // r2@84
  signed int v91; // r3@85
  char *ptr; // [sp+4h] [bp-9Ch]@12
  __int64 v93; // [sp+8h] [bp-98h]@10
  pthread_mutex_t *mutex; // [sp+10h] [bp-90h]@13
  void *s; // [sp+14h] [bp-8Ch]@9
  __int64 v96; // [sp+18h] [bp-88h]@2
  int v97; // [sp+20h] [bp-80h]@10
  int v98; // [sp+24h] [bp-7Ch]@10
  int v99; // [sp+2Ch] [bp-74h]@46
  int v100; // [sp+38h] [bp-68h]@2
  int v101; // [sp+3Ch] [bp-64h]@2
  char v102; // [sp+44h] [bp-5Ch]@21
  int v103; // [sp+48h] [bp-58h]@21
  char v104; // [sp+4Ch] [bp-54h]@21
  int v105; // [sp+58h] [bp-48h]@21
  char v106; // [sp+60h] [bp-40h]@10
  char v107; // [sp+61h] [bp-3Fh]@10
  char v108; // [sp+62h] [bp-3Eh]@10
  char v109; // [sp+63h] [bp-3Dh]@10
  char v110; // [sp+64h] [bp-3Ch]@10
  char v111; // [sp+65h] [bp-3Bh]@10
  char v112; // [sp+66h] [bp-3Ah]@10
  char v113; // [sp+67h] [bp-39h]@10
  char v114; // [sp+68h] [bp-38h]@10
  char v115; // [sp+69h] [bp-37h]@10
  char v116; // [sp+6Ah] [bp-36h]@10
  char v117; // [sp+6Bh] [bp-35h]@10
  char v118; // [sp+6Ch] [bp-34h]@10
  char v119; // [sp+6Dh] [bp-33h]@10
  char v120; // [sp+6Eh] [bp-32h]@10
  char v121; // [sp+6Fh] [bp-31h]@10
  char v122; // [sp+70h] [bp-30h]@10
  char v123; // [sp+71h] [bp-2Fh]@10
  char v124; // [sp+72h] [bp-2Eh]@10
  char v125; // [sp+73h] [bp-2Dh]@10
  char v126; // [sp+74h] [bp-2Ch]@10
  char v127; // [sp+75h] [bp-2Bh]@10
  char v128; // [sp+76h] [bp-2Ah]@10
  char v129; // [sp+77h] [bp-29h]@10

  _R5 = a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = a2;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 4)) )
    goto LABEL_96;
  *(_QWORD *)(_R5 + 72) = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(_R5 + 80) = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(_R5 + 88) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(_R5 + 96) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(_R5 + 104) = *(_QWORD *)(v3 + 48);
  *(_DWORD *)(_R5 + 112) = *(_DWORD *)(v3 + 56);
  *(_DWORD *)(_R5 + 116) = *(_DWORD *)(v3 + 60);
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 4));
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(_R5 + 72);
  *(_QWORD *)(v4 + 72) = *(_QWORD *)(_R5 + 80);
  *(_QWORD *)(v4 + 80) = *(_QWORD *)(_R5 + 96);
  sub_5D4B4(&v100);
  v5 = *(_DWORD *)(_R5 + 116);
  _R1 = v101;
  v96 = *(_QWORD *)&v100;
  if ( v5 == 2 )
  {
    *(_BYTE *)(_R5 + 120) = 1;
LABEL_5:
    v7 = -1LL;
    goto LABEL_6;
  }
  if ( v5 != 1 || *(_BYTE *)(_R5 + 120) )
    goto LABEL_5;
  __asm
  {
    VLDR            D6, [R5,#0x68]
    VLDR            D7, =1000.0
    VMUL.F64        D7, D6, D7
    VMOV            R0, R1, D7
  }
  LODWORD(v87) = _fixdfdi(_R0);
  v7 = v96 - v87;
LABEL_6:
  v8 = *(_BYTE *)(v4 + 8);
  *(_QWORD *)(v4 + 88) = v7;
  if ( v8 || (v9 = *(_DWORD *)(v4 + 96)) == 0 )
  {
    v9 = *(_DWORD *)(v4 + 100);
    if ( !v9 )
      v9 = *(_DWORD *)(dword_1F80F0 + 100);
  }
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 48))(v9);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 60))(v9);
  v12 = v11;
  if ( v11 )
    s = (void *)operator new(v11);
  else
    s = 0;
  memset(s, 0, v12);
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v9 + 56))(v9, s);
  sub_54D28(s, v10);
  LODWORD(v13) = sub_546C8(s, v10, dword_56B08[0], dword_56B08[1]);
  v14 = *(_DWORD *)(v4 + 68);
  v15 = *(_DWORD *)(v4 + 64);
  v16 = *(_DWORD *)(v4 + 72);
  v109 = *(_DWORD *)(v4 + 68);
  v112 = BYTE1(v15);
  v113 = v15;
  v111 = v15 >> 16;
  v121 = v16;
  v107 = v14 >> 16;
  v119 = v16 >> 16;
  v93 = v13;
  v110 = BYTE3(v15);
  v108 = BYTE1(v14);
  v17 = v14 >> 24;
  v18 = *(_DWORD *)(v4 + 76);
  v106 = v17;
  v120 = BYTE1(v16);
  v19 = v16 >> 24;
  v20 = v18 >> 16;
  v21 = *(_DWORD *)(v4 + 80);
  v118 = v19;
  v116 = BYTE1(v18);
  v117 = v18;
  v22 = v18 >> 24;
  v23 = *(_DWORD *)(v4 + 84);
  v115 = v20;
  v114 = v22;
  v128 = BYTE1(v21);
  v129 = v21;
  v125 = v23;
  v127 = v21 >> 16;
  v126 = BYTE3(v21);
  v124 = BYTE1(v23);
  v123 = v23 >> 16;
  v122 = BYTE3(v23);
  v97 = sub_54D28(&v106, 24);
  v24 = sub_54D28(&v106, 24);
  v25 = *(_DWORD *)(v4 + 28);
  v98 = v24;
  if ( v25 >= 0x20000000 )
    sub_1B7044("vector::reserve");
  if ( !v25 )
  {
    ptr = 0;
    goto LABEL_13;
  }
  v54 = 8 * v25;
  ptr = (char *)operator new(8 * v25);
  v55 = (int)&ptr[v54];
  if ( *(_DWORD *)(v4 + 28) > 0 )
  {
    v56 = 0;
    v57 = ptr;
    v99 = _R5;
    while ( 1 )
    {
      v60 = *(_DWORD *)(v4 + 36) + 4 * v56;
      v61 = *(_DWORD *)(v60 + 4);
      v62 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v61 + 48))(*(_DWORD *)(v60 + 4));
      v63 = *(int (**)())(*(_DWORD *)v61 + 60);
      v64 = v62;
      if ( v63 == sub_22938 )
        v65 = *(_DWORD *)(v61 + 20);
      else
        v65 = ((int (__fastcall *)(int))v63)(v61);
      v66 = (void *)v65;
      if ( v65 )
      {
        v67 = (pthread_mutex_t *)v65;
        v68 = (void *)operator new(v65);
        v65 = (unsigned int)v67;
        v66 = v68;
      }
      memset(v66, 0, v65);
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v61 + 56))(v61, v66);
      LODWORD(v58) = sub_546C8(v66, v64, v93, HIDWORD(v93));
      v59 = v58;
      if ( (char *)v55 == v57 )
        break;
      if ( v57 )
        *(_QWORD *)v57 = v58;
      v57 += 8;
LABEL_51:
      ++v56;
      operator delete(v66);
      if ( *(_DWORD *)(v4 + 28) <= v56 )
      {
        _R5 = v99;
        goto LABEL_13;
      }
    }
    v69 = (v55 - (signed int)ptr) >> 3;
    if ( v69 )
    {
      v70 = 2 * v69;
      if ( v69 > 2 * v69 || v70 >= 0x20000000 )
      {
        v71 = -8;
      }
      else
      {
        v71 = 16 * v69;
        if ( !v70 )
        {
          v75 = 0;
          v76 = 8;
          goto LABEL_63;
        }
      }
    }
    else
    {
      v71 = 8;
    }
    v72 = v59;
    v73 = (pthread_mutex_t *)v71;
    v74 = (char *)operator new(v71);
    v71 = (unsigned int)v73;
    v59 = v72;
    v75 = v74;
    v76 = (int)(v74 + 8);
LABEL_63:
    v77 = &v75[v55 - (_DWORD)ptr];
    if ( v77 )
      *(_QWORD *)v77 = v59;
    if ( (char *)v55 == ptr )
    {
      v57 = (char *)v76;
    }
    else
    {
      v78 = v75;
      v79 = ptr;
      do
      {
        if ( v78 )
          *(_QWORD *)v78 = *(_QWORD *)v79;
        v79 += 8;
        v78 += 8;
      }
      while ( (char *)v55 != v79 );
      v57 = &v75[((v55 - (_DWORD)(ptr + 8)) & 0xFFFFFFF8) + 16];
    }
    if ( ptr )
    {
      v80 = ptr;
      v81 = (void *)v71;
      operator delete(v80);
      v71 = (unsigned int)v81;
    }
    v55 = (int)&v75[v71];
    ptr = v75;
    goto LABEL_51;
  }
LABEL_13:
  mutex = (pthread_mutex_t *)(_R5 + 124);
  if ( pthread_mutex_lock((pthread_mutex_t *)(_R5 + 124)) )
LABEL_96:
    sub_1B725C();
  v26 = _R5 + 128;
  (*(void (**)(void))(**(_DWORD **)(_R5 + 12) + 24))();
  if ( dword_1FA36C == *(_DWORD *)(_R5 + 280) )
    sub_20120(_R5 + 280, _R5 + 320);
  else
    sub_1B8614();
  *(_QWORD *)(_R5 + 160) = v96;
  *(_DWORD *)(_R5 + 276) = v98;
  *(_DWORD *)(_R5 + 244) = v97;
  sub_45CD4(_R5 + 296, *(_DWORD *)(v4 + 28));
  if ( *(_DWORD *)(v4 + 28) > 0 )
  {
    v27 = 0;
    v28 = (int)(ptr - 8);
    do
    {
      ++v27;
      v29 = *(_DWORD *)(_R5 + 304);
      v30 = *(_DWORD *)(_R5 + 296) + 1;
      v31 = *(_QWORD *)(v28 + 8);
      v28 += 8;
      *(_DWORD *)(_R5 + 296) = v30;
      *(_QWORD *)(v29 + 8 * v30) = v31;
    }
    while ( *(_DWORD *)(v4 + 28) > v27 );
  }
  sub_1B6E90(&v100);
  *(_QWORD *)(_R5 + 288) = *(_QWORD *)&v100 / 1000000LL;
  v32 = (char *)sub_3FE3C(v26);
  v33 = sub_8742C();
  v34 = operator new(0xCu);
  v35 = (int *)v34;
  *(_DWORD *)v34 = 0;
  *(_DWORD *)(v34 + 4) = 0;
  *(_DWORD *)(v34 + 8) = 0;
  v36 = (char *)v33;
  if ( v33 )
    v36 = (char *)operator new(v33);
  v35[2] = (int)&v36[v33];
  *v35 = (int)v36;
  v35[1] = (int)v36;
  memset(v36, 0, v33);
  v35[1] = v35[2];
  v37 = operator new(0x14u);
  *(_DWORD *)(v37 + 16) = v35;
  v38 = v37;
  *(_DWORD *)v37 = &off_1F4208;
  *(_DWORD *)(v37 + 4) = 1;
  *(_DWORD *)(v37 + 8) = 1;
  sub_41618(v26, *v35);
  sub_43B8C(v26);
  pthread_mutex_unlock(mutex);
  sub_87444(*v35, v32);
  sub_3C060(&v104);
  v39 = dword_1FA36C;
  sub_1B86EC(&v103, *v35, v33, &v102);
  if ( v39 == v105 )
    sub_20120(&v105, &v103);
  else
    sub_1B8614();
  v40 = (void *)(v103 - 12);
  if ( (_UNKNOWN *)(v103 - 12) != &unk_200B34 )
  {
    v90 = (unsigned int *)(v103 - 4);
    __dmb();
    do
      v91 = __ldrex(v90);
    while ( __strex(v91 - 1, v90) );
    __dmb();
    if ( v91 <= 0 )
      operator delete(v40);
  }
  v41 = *(_DWORD *)(v4 + 48);
  v42 = *(_DWORD *)(v4 + 56);
  if ( v41 <= 0 )
  {
    if ( !v42 )
    {
      v48 = *(_DWORD *)(v4 + 52);
      goto LABEL_92;
    }
LABEL_31:
    v47 = *(_DWORD *)v42;
    if ( v41 < *(_DWORD *)v42 )
    {
      *(_DWORD *)(v4 + 48) = v41 + 1;
      v43 = *(_DWORD *)(v42 + 4 * v41 + 4);
      goto LABEL_34;
    }
    v48 = *(_DWORD *)(v4 + 52);
    if ( v47 != v48 )
    {
LABEL_33:
      *(_DWORD *)v42 = v47 + 1;
      v49 = sub_53984(*(_DWORD *)(v4 + 44));
      v50 = *(_DWORD *)(v4 + 48);
      v51 = *(_DWORD *)(v4 + 56);
      *(_DWORD *)(v4 + 48) = v50 + 1;
      v43 = v49;
      *(_DWORD *)(v51 + 4 * v50 + 4) = v49;
LABEL_34:
      *(_DWORD *)(v43 + 16) = 6;
      goto LABEL_35;
    }
LABEL_92:
    sub_105558(v4 + 44, v48 + 1);
    v42 = *(_DWORD *)(v4 + 56);
    v47 = *(_DWORD *)v42;
    goto LABEL_33;
  }
  v43 = *(_DWORD *)(v42 + 4);
  if ( *(_DWORD *)(v43 + 16) != 6 )
  {
    v44 = v42 + 4;
    v45 = 0;
    while ( ++v45 != v41 )
    {
      v46 = *(_DWORD *)(v44 + 4);
      v44 += 4;
      v43 = v46;
      if ( *(_DWORD *)(v46 + 16) == 6 )
        goto LABEL_35;
    }
    v42 = *(_DWORD *)(v4 + 56);
    goto LABEL_31;
  }
LABEL_35:
  if ( dword_1FA36C == *(_DWORD *)(v43 + 12) )
  {
    sub_20120(v43 + 12, dword_1FA36C);
    sub_FE290(&v104, *(_DWORD *)(v43 + 12));
    sub_3C3C8(&v104);
  }
  else
  {
    sub_FE290(&v104, *(_DWORD *)(v43 + 12));
    sub_3C3C8(&v104);
  }
  v52 = (unsigned int *)(v38 + 4);
  __dmb();
  do
    v53 = __ldrex(v52);
  while ( __strex(v53 - 1, v52) );
  __dmb();
  if ( v53 == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
    v88 = (unsigned int *)(v38 + 8);
    __dmb();
    do
      v89 = __ldrex(v88);
    while ( __strex(v89 - 1, v88) );
    __dmb();
    if ( v89 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  }
  if ( ptr )
    operator delete(ptr);
  operator delete(s);
}
