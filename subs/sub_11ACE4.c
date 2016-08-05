void __fastcall sub_11ACE4(pthread_mutex_t **a1)
{
  int v1; // r9@1
  char *v2; // r0@2
  unsigned int v3; // r5@2
  size_t v4; // r0@2
  void *v5; // r0@2
  unsigned int *v6; // r3@4
  unsigned int v7; // r2@5
  int v8; // [sp+4h] [bp-7Ch]@2
  int *v9; // [sp+8h] [bp-78h]@2
  int v10; // [sp+Ch] [bp-74h]@2
  int v11; // [sp+10h] [bp-70h]@2
  int v12; // [sp+14h] [bp-6Ch]@2
  unsigned int v13; // [sp+18h] [bp-68h]@2
  int v14; // [sp+1Ch] [bp-64h]@2
  int v15; // [sp+20h] [bp-60h]@2
  unsigned int v16; // [sp+24h] [bp-5Ch]@2
  unsigned int v17; // [sp+28h] [bp-58h]@2
  int v18; // [sp+2Ch] [bp-54h]@2
  int v19; // [sp+30h] [bp-50h]@2
  int v20; // [sp+34h] [bp-4Ch]@2
  int v21; // [sp+38h] [bp-48h]@2
  int v22; // [sp+3Ch] [bp-44h]@2
  int v23; // [sp+40h] [bp-40h]@2
  int v24; // [sp+44h] [bp-3Ch]@2
  int v25; // [sp+48h] [bp-38h]@2
  int v26; // [sp+4Ch] [bp-34h]@2
  unsigned int v27; // [sp+50h] [bp-30h]@2
  char v28; // [sp+54h] [bp-2Ch]@2
  char v29; // [sp+55h] [bp-2Bh]@2
  char v30; // [sp+56h] [bp-2Ah]@2
  char v31; // [sp+57h] [bp-29h]@2

  v1 = pthread_mutex_unlock(*a1);
  if ( v1 )
  {
    LOBYTE(v13) = 54;
    BYTE3(v13) = 54;
    *(_WORD *)((char *)&v13 + 1) = 13879;
    LOBYTE(v17) = 55;
    *(_WORD *)((char *)&v16 + 1) = 31866;
    *(_WORD *)((char *)&v17 + 1) = 31352;
    LOBYTE(v16) = 105;
    BYTE3(v16) = -127;
    BYTE3(v17) = 119;
    v12 = 774843950;
    LOBYTE(v27) = 117;
    *(_WORD *)((char *)&v27 + 1) = 30581;
    BYTE3(v27) = 118;
    v31 = 0;
    v13 = ((v13 & 0x7F7F7F7F) + 2021161080) ^ (v13 ^ 0xF8F8F8F8) & 0x80808080;
    v14 = 1768453167;
    v28 = 46;
    v15 = 1885299826;
    v18 = 1969385332;
    v19 = 1768304486;
    v29 = 99;
    v30 = 99;
    v20 = 796091756;
    v21 = 1735356263;
    v16 = (v16 ^ 0xF8F8F8F8) & 0x80808080 ^ ((v16 & 0x7F7F7F7F) + 2021161080);
    v22 = 1882154348;
    v17 = ((v17 & 0x7F7F7F7F) + 2021161080) ^ (v17 ^ 0xF8F8F8F8) & 0x80808080;
    v23 = 1869901682;
    v24 = 795243874;
    v26 = 1868771187;
    v25 = 1651864691;
    v27 = (v27 ^ 0xF8F8F8F8) & 0x80808080 ^ ((v27 & 0x7F7F7F7F) + 2021161080);
    v8 = 3;
    v9 = &v12;
    v10 = 375;
    v11 = (int)&unk_200B40;
    sub_1B83E4((int)&v11, (unsigned int)"pthread_mutex_unlock: ", 0x16u);
    v2 = strerror(v1);
    v3 = (unsigned int)v2;
    v4 = strlen(v2);
    sub_1B83E4((int)&v11, v3, v4);
    sub_11B044(&v8);
    v5 = (void *)(v11 - 12);
    if ( (_UNKNOWN *)(v11 - 12) != &unk_200B34 )
    {
      v6 = (unsigned int *)(v11 - 4);
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      __dmb();
      if ( (signed int)v7 <= 0 )
        operator delete(v5);
    }
  }
}