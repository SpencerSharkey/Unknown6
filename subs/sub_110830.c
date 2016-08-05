int __fastcall sub_110830(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  void *v7; // r7@6
  void *v8; // r0@6
  char *v9; // r8@7
  char v10; // r3@8
  int *v11; // r4@8
  int v12; // r0@11
  int v13; // r0@11
  int v14; // r0@11
  int v15; // r0@11
  int v16; // r0@11
  int v17; // r0@11
  int v18; // r0@11
  int v19; // r0@11
  void *v20; // r0@11
  unsigned int *v22; // r3@15
  signed int v23; // r2@16
  unsigned int *v24; // r3@20
  signed int v25; // r2@21
  const char *v26; // [sp+4h] [bp-94h]@4
  char v27; // [sp+Ch] [bp-8Ch]@11
  int v28; // [sp+10h] [bp-88h]@5
  char v29; // [sp+14h] [bp-84h]@7
  int v30; // [sp+24h] [bp-74h]@5
  char v31; // [sp+28h] [bp-70h]@8
  char v32; // [sp+29h] [bp-6Fh]@8
  char v33; // [sp+2Ah] [bp-6Eh]@8
  char v34; // [sp+2Bh] [bp-6Dh]@8
  char v35; // [sp+2Ch] [bp-6Ch]@8
  char v36; // [sp+2Dh] [bp-6Bh]@8
  char v37; // [sp+2Eh] [bp-6Ah]@8
  char v38; // [sp+2Fh] [bp-69h]@8
  char v39; // [sp+30h] [bp-68h]@8
  char v40; // [sp+31h] [bp-67h]@8
  char v41; // [sp+32h] [bp-66h]@8
  char v42; // [sp+33h] [bp-65h]@8
  char v43; // [sp+34h] [bp-64h]@8
  char v44; // [sp+35h] [bp-63h]@8
  char v45; // [sp+36h] [bp-62h]@8
  char v46; // [sp+37h] [bp-61h]@8
  char v47; // [sp+38h] [bp-60h]@8
  char v48; // [sp+39h] [bp-5Fh]@8
  char v49; // [sp+3Ah] [bp-5Eh]@8
  char v50; // [sp+3Bh] [bp-5Dh]@8
  char v51; // [sp+3Ch] [bp-5Ch]@8
  char v52; // [sp+3Dh] [bp-5Bh]@8
  char v53; // [sp+3Eh] [bp-5Ah]@8
  char v54; // [sp+3Fh] [bp-59h]@8
  char v55; // [sp+40h] [bp-58h]@8
  char v56; // [sp+41h] [bp-57h]@8
  char v57; // [sp+42h] [bp-56h]@8
  char v58; // [sp+43h] [bp-55h]@8
  char v59; // [sp+44h] [bp-54h]@8
  char v60; // [sp+45h] [bp-53h]@8
  char v61; // [sp+46h] [bp-52h]@8
  char v62; // [sp+47h] [bp-51h]@8
  char v63; // [sp+48h] [bp-50h]@8
  char v64; // [sp+49h] [bp-4Fh]@8
  char v65; // [sp+4Ah] [bp-4Eh]@8
  char v66; // [sp+4Bh] [bp-4Dh]@8
  char v67; // [sp+4Ch] [bp-4Ch]@8
  char v68; // [sp+4Dh] [bp-4Bh]@8
  char v69; // [sp+4Eh] [bp-4Ah]@8
  char v70; // [sp+4Fh] [bp-49h]@8
  char v71; // [sp+50h] [bp-48h]@8
  char v72; // [sp+51h] [bp-47h]@8
  char v73; // [sp+52h] [bp-46h]@8
  char v74; // [sp+53h] [bp-45h]@8
  char v75; // [sp+54h] [bp-44h]@8
  char v76; // [sp+55h] [bp-43h]@8
  char v77; // [sp+56h] [bp-42h]@8
  char v78; // [sp+57h] [bp-41h]@8
  char v79; // [sp+58h] [bp-40h]@8
  char v80; // [sp+59h] [bp-3Fh]@8
  char v81; // [sp+5Ah] [bp-3Eh]@8
  char v82; // [sp+5Bh] [bp-3Dh]@8
  char v83; // [sp+5Ch] [bp-3Ch]@8
  char v84; // [sp+5Dh] [bp-3Bh]@8
  char v85; // [sp+5Eh] [bp-3Ah]@8
  char v86; // [sp+5Fh] [bp-39h]@8
  char v87; // [sp+60h] [bp-38h]@8
  char v88; // [sp+61h] [bp-37h]@8
  char v89; // [sp+62h] [bp-36h]@8
  char v90; // [sp+63h] [bp-35h]@8
  char v91; // [sp+64h] [bp-34h]@8
  char v92; // [sp+66h] [bp-32h]@8
  char v93; // [sp+67h] [bp-31h]@8
  char v94; // [sp+68h] [bp-30h]@8
  char v95; // [sp+69h] [bp-2Fh]@8
  char v96; // [sp+6Ah] [bp-2Eh]@8
  char v97; // [sp+6Bh] [bp-2Dh]@8
  char v98; // [sp+6Ch] [bp-2Ch]@11

  v4 = a3;
  v5 = a4;
  v6 = sub_11D268();
  if ( !v6 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
        v26 = "serializing";
      else
        v26 = 0;
    }
    else
    {
      v26 = "parsing";
    }
    sub_1B8850(&v28, &unk_1D2476, &v30);
    if ( v5 )
    {
      sub_11BBB4(&v30, " '%s'", v5);
      sub_1B7AAC(&v28, &v30);
      v7 = &unk_200B34;
      v8 = (void *)(v30 - 12);
      if ( (_UNKNOWN *)(v30 - 12) == &unk_200B34 )
      {
        v9 = &v29;
      }
      else
      {
        v24 = (unsigned int *)(v30 - 4);
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        __dmb();
        v9 = &v29;
        if ( v25 <= 0 )
          operator delete(v8);
      }
    }
    else
    {
      v9 = &v29;
      v7 = &unk_200B34;
    }
    memset(&v30, 0, 0x49u);
    v30 = 16974380;
    v51 = 44;
    v58 = 44;
    v31 = 1;
    v10 = 44;
    v34 = 28;
    v32 = 30;
    v33 = 30;
    v35 = 29;
    v36 = 27;
    v37 = 65;
    v11 = &v30;
    v40 = 74;
    v46 = 74;
    v41 = 93;
    v44 = 93;
    v42 = 101;
    v43 = 75;
    v45 = 79;
    v47 = 70;
    v48 = 111;
    v49 = 49;
    v50 = 48;
    v52 = 48;
    v53 = 42;
    v54 = 36;
    v55 = 50;
    v56 = 46;
    v57 = 102;
    v38 = 94;
    v59 = 34;
    v39 = 94;
    v60 = 32;
    v85 = 3;
    v69 = 48;
    v72 = 42;
    v74 = 46;
    v90 = 30;
    v61 = 40;
    v77 = 40;
    v62 = 61;
    v66 = 61;
    v63 = 96;
    v64 = 55;
    v65 = 62;
    v76 = 62;
    v67 = 52;
    v75 = 52;
    v91 = 52;
    v68 = 56;
    v78 = 56;
    v70 = 121;
    v71 = 39;
    v73 = 54;
    v79 = 112;
    v80 = 23;
    v81 = 8;
    v89 = 8;
    v82 = 16;
    v83 = 6;
    v84 = 59;
    v86 = 9;
    v87 = 21;
    v88 = 5;
    v92 = 4;
    v93 = 26;
    v94 = 10;
    v95 = 94;
    v97 = 17;
    v96 = 18;
    while ( 1 )
    {
      *((_BYTE *)v11 + 1) ^= v10 + (_BYTE)v11 - (unsigned int)&v30;
      v11 = (int *)((char *)v11 + 1);
      if ( (char *)v11 == &v97 )
        break;
      v10 = v30;
    }
    v98 = 0;
    sub_11AC24(v9, 2, (char *)&v30 + 1, 532);
    v12 = sub_11ABD0(v9, "String field");
    v13 = sub_11ABC0(v12, &v28);
    v14 = sub_11ABD0(v13, " contains invalid ");
    v15 = sub_11ABD0(v14, "UTF-8 data when ");
    v16 = sub_11ABD0(v15, v26);
    v17 = sub_11ABD0(v16, " a protocol ");
    v18 = sub_11ABD0(v17, "buffer. Use the 'bytes' type if you intend to send raw ");
    v19 = sub_11ABD0(v18, "bytes. ");
    sub_11B094(&v27, v19);
    sub_11AC40(v9);
    v20 = (void *)(v28 - 12);
    if ( (void *)(v28 - 12) != v7 )
    {
      v22 = (unsigned int *)(v28 - 4);
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      __dmb();
      if ( v23 <= 0 )
        operator delete(v20);
    }
  }
  return v6;
}
