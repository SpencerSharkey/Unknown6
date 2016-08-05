void __fastcall sub_11B678(pthread_mutex_t **a1)
{
  int v1; // r8@1
  char *v2; // r3@2
  char v3; // r1@2
  char v4; // t1@4
  char *v5; // r0@5
  unsigned int v6; // r6@5
  size_t v7; // r0@5
  void *v8; // r0@5
  unsigned int *v9; // r3@7
  unsigned int v10; // r2@8
  int v11; // [sp+8h] [bp-80h]@5
  char *v12; // [sp+Ch] [bp-7Ch]@5
  int v13; // [sp+10h] [bp-78h]@5
  int v14; // [sp+14h] [bp-74h]@5
  char s; // [sp+18h] [bp-70h]@2
  char v16; // [sp+19h] [bp-6Fh]@2
  char v17; // [sp+1Ah] [bp-6Eh]@2
  char v18; // [sp+1Bh] [bp-6Dh]@2
  char v19; // [sp+1Ch] [bp-6Ch]@2
  char v20; // [sp+1Dh] [bp-6Bh]@2
  char v21; // [sp+1Eh] [bp-6Ah]@2
  char v22; // [sp+1Fh] [bp-69h]@2
  char v23; // [sp+20h] [bp-68h]@2
  char v24; // [sp+21h] [bp-67h]@2
  char v25; // [sp+22h] [bp-66h]@2
  char v26; // [sp+23h] [bp-65h]@2
  char v27; // [sp+24h] [bp-64h]@2
  char v28; // [sp+25h] [bp-63h]@2
  char v29; // [sp+26h] [bp-62h]@2
  char v30; // [sp+27h] [bp-61h]@2
  char v31; // [sp+28h] [bp-60h]@2
  char v32; // [sp+29h] [bp-5Fh]@2
  char v33; // [sp+2Ah] [bp-5Eh]@2
  char v34; // [sp+2Bh] [bp-5Dh]@2
  char v35; // [sp+2Ch] [bp-5Ch]@2
  char v36; // [sp+2Dh] [bp-5Bh]@2
  char v37; // [sp+2Eh] [bp-5Ah]@2
  char v38; // [sp+2Fh] [bp-59h]@2
  char v39; // [sp+30h] [bp-58h]@2
  char v40; // [sp+31h] [bp-57h]@2
  char v41; // [sp+32h] [bp-56h]@2
  char v42; // [sp+33h] [bp-55h]@2
  char v43; // [sp+34h] [bp-54h]@2
  char v44; // [sp+35h] [bp-53h]@2
  char v45; // [sp+36h] [bp-52h]@2
  char v46; // [sp+37h] [bp-51h]@2
  char v47; // [sp+38h] [bp-50h]@2
  char v48; // [sp+39h] [bp-4Fh]@2
  char v49; // [sp+3Ah] [bp-4Eh]@2
  char v50; // [sp+3Bh] [bp-4Dh]@2
  char v51; // [sp+3Ch] [bp-4Ch]@2
  char v52; // [sp+3Dh] [bp-4Bh]@2
  char v53; // [sp+3Eh] [bp-4Ah]@2
  char v54; // [sp+3Fh] [bp-49h]@2
  char v55; // [sp+40h] [bp-48h]@2
  char v56; // [sp+41h] [bp-47h]@2
  char v57; // [sp+42h] [bp-46h]@2
  char v58; // [sp+43h] [bp-45h]@2
  char v59; // [sp+44h] [bp-44h]@2
  char v60; // [sp+45h] [bp-43h]@2
  char v61; // [sp+46h] [bp-42h]@2
  char v62; // [sp+47h] [bp-41h]@2
  char v63; // [sp+48h] [bp-40h]@2
  char v64; // [sp+49h] [bp-3Fh]@2
  char v65; // [sp+4Ah] [bp-3Eh]@2
  char v66; // [sp+4Bh] [bp-3Dh]@2
  char v67; // [sp+4Ch] [bp-3Ch]@2
  char v68; // [sp+4Dh] [bp-3Bh]@2
  char v69; // [sp+4Eh] [bp-3Ah]@2
  char v70; // [sp+4Fh] [bp-39h]@2
  char v71; // [sp+50h] [bp-38h]@2
  char v72; // [sp+51h] [bp-37h]@2
  char v73; // [sp+52h] [bp-36h]@2
  char v74; // [sp+53h] [bp-35h]@2
  char v75; // [sp+54h] [bp-34h]@2
  char v76; // [sp+55h] [bp-33h]@2
  char v77; // [sp+56h] [bp-32h]@2
  char v78; // [sp+57h] [bp-31h]@2
  char v79; // [sp+58h] [bp-30h]@2
  char v80; // [sp+59h] [bp-2Fh]@2
  char v81; // [sp+5Ah] [bp-2Eh]@2
  char v82; // [sp+5Bh] [bp-2Dh]@2
  char v83; // [sp+5Ch] [bp-2Ch]@5

  v1 = pthread_mutex_lock(*a1);
  if ( v1 )
  {
    memset(&s, 0, 0x45u);
    v2 = &s;
    s = 56;
    v16 = 22;
    v17 = 22;
    v19 = 22;
    v20 = 22;
    v22 = 22;
    v3 = 56;
    v23 = 22;
    v25 = 76;
    v34 = 76;
    v40 = 76;
    v26 = 80;
    v27 = 81;
    v47 = 81;
    v28 = 74;
    v33 = 74;
    v38 = 74;
    v29 = 92;
    v30 = 103;
    v31 = 72;
    v37 = 72;
    v32 = 89;
    v35 = 65;
    v44 = 94;
    v46 = 94;
    v18 = 23;
    v21 = 23;
    v24 = 23;
    v36 = 23;
    v45 = 23;
    v39 = 87;
    v41 = 87;
    v42 = 90;
    v43 = 77;
    v48 = 84;
    v80 = 22;
    v56 = 84;
    v59 = 72;
    v60 = 74;
    v62 = 76;
    v66 = 94;
    v69 = 76;
    v51 = 23;
    v53 = 87;
    v54 = 87;
    v58 = 23;
    v61 = 87;
    v63 = 87;
    v64 = 90;
    v65 = 77;
    v67 = 23;
    v70 = 77;
    v71 = 90;
    v73 = 23;
    v75 = 87;
    v78 = 87;
    v49 = 93;
    v57 = 93;
    v50 = 75;
    v68 = 75;
    v72 = 75;
    v52 = 95;
    v55 = 95;
    v74 = 91;
    v81 = 91;
    v76 = 85;
    v77 = 85;
    v79 = 86;
    v82 = 91;
    while ( 1 )
    {
      v4 = (v2++)[1];
      *v2 = v4 ^ v3;
      if ( v2 == &v82 )
        break;
      v3 = s;
    }
    v83 = 0;
    v14 = (int)&unk_200B40;
    v13 = 368;
    v11 = 3;
    v12 = &v16;
    sub_1B83E4((int)&v14, (unsigned int)"pthread_mutex_lock: ", 0x14u);
    v5 = strerror(v1);
    v6 = (unsigned int)v5;
    v7 = strlen(v5);
    sub_1B83E4((int)&v14, v6, v7);
    sub_11B044(&v11);
    v8 = (void *)(v14 - 12);
    if ( (_UNKNOWN *)(v14 - 12) != &unk_200B34 )
    {
      v9 = (unsigned int *)(v14 - 4);
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      __dmb();
      if ( (signed int)v10 <= 0 )
        operator delete(v8);
    }
  }
}