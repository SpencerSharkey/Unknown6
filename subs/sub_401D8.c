int __fastcall sub_401D8(int a1, int a2)
{
  int v2; // r5@1
  int *v3; // r3@1
  int v4; // r4@1
  int v5; // r1@1
  const void **v6; // r0@2
  unsigned int v18; // r0@19
  unsigned int v19; // r0@22
  int result; // r0@23
  _BYTE *v21; // r2@24
  char v22; // r3@26
  _BYTE *v23; // r2@28
  char v24; // r3@30

  v2 = a1;
  v3 = *(int **)(a1 + 12);
  v4 = a2;
  v5 = *(_DWORD *)(*v3 - 12);
  if ( v5 )
  {
    WireFormat::VerifyUTF8StringFallback(*v3, v5, 1, dword_1F85A8);
    v6 = *(const void ***)(v2 + 12);
    *(_BYTE *)v4 = 10;
    v4 = sub_1152FC(v6, (_BYTE *)(v4 + 1));
  }
  if ( *(_QWORD *)(v2 + 16) )
  {
    *(_BYTE *)v4 = 16;
    v4 = sub_114D9C();
  }
  _R3 = *(_DWORD *)(v2 + 24);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 1) = _R3;
    *(_BYTE *)(v4 + 2) = BYTE1(_R3);
    *(_BYTE *)(v4 + 3) = _R3 >> 16;
    v4 += 5;
    *(_BYTE *)(v4 - 5) = 37;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
  }
  _R3 = *(_DWORD *)(v2 + 28);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 1) = _R3;
    *(_BYTE *)(v4 + 2) = BYTE1(_R3);
    *(_BYTE *)(v4 + 3) = _R3 >> 16;
    v4 += 5;
    *(_BYTE *)(v4 - 5) = 109;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
  }
  _R3 = *(_DWORD *)(v2 + 32);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 1) = _R3;
    *(_BYTE *)(v4 + 2) = BYTE1(_R3);
    *(_BYTE *)(v4 + 3) = _R3 >> 16;
    v4 += 5;
    *(_BYTE *)(v4 - 5) = 117;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
  }
  _R3 = *(_DWORD *)(v2 + 36);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 2) = _R3;
    *(_BYTE *)v4 = -107;
    *(_BYTE *)(v4 + 3) = BYTE1(_R3);
    *(_BYTE *)(v4 + 4) = _R3 >> 16;
    v4 += 6;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
    *(_BYTE *)(v4 - 5) = 1;
  }
  _R3 = *(_DWORD *)(v2 + 40);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 2) = _R3;
    *(_BYTE *)v4 = -91;
    *(_BYTE *)(v4 + 3) = BYTE1(_R3);
    *(_BYTE *)(v4 + 4) = _R3 >> 16;
    v4 += 6;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
    *(_BYTE *)(v4 - 5) = 1;
  }
  _R3 = *(_DWORD *)(v2 + 44);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 2) = _R3;
    *(_BYTE *)v4 = -83;
    *(_BYTE *)(v4 + 3) = BYTE1(_R3);
    *(_BYTE *)(v4 + 4) = _R3 >> 16;
    v4 += 6;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
    *(_BYTE *)(v4 - 5) = 1;
  }
  _R3 = *(_DWORD *)(v2 + 48);
  __asm
  {
    VMOV            S15, R3
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(v4 + 2) = _R3;
    *(_BYTE *)v4 = -75;
    *(_BYTE *)(v4 + 3) = BYTE1(_R3);
    *(_BYTE *)(v4 + 4) = _R3 >> 16;
    v4 += 6;
    *(_BYTE *)(v4 - 1) = BYTE3(_R3);
    *(_BYTE *)(v4 - 5) = 1;
  }
  v18 = *(_DWORD *)(v2 + 52);
  if ( v18 )
  {
    *(_BYTE *)v4 = -48;
    v23 = (_BYTE *)(v4 + 2);
    *(_BYTE *)(v4 + 1) = 1;
    if ( (v18 & 0x80000000) != 0 )
    {
      v4 = sub_114D9C();
    }
    else
    {
      if ( (signed int)v18 > 127 )
      {
        do
        {
          v24 = v18 | 0x80;
          v18 >>= 7;
          *v23++ = v24;
        }
        while ( v18 > 0x7F );
      }
      *v23 = v18;
      v4 = (int)(v23 + 1);
    }
  }
  if ( *(_QWORD *)(v2 + 56) )
  {
    *(_BYTE *)v4 = -40;
    *(_BYTE *)(v4 + 1) = 1;
    v4 = sub_114D9C();
  }
  v19 = *(_DWORD *)(v2 + 64);
  if ( v19 )
  {
    *(_BYTE *)v4 = -32;
    v21 = (_BYTE *)(v4 + 2);
    *(_BYTE *)(v4 + 1) = 1;
    if ( (v19 & 0x80000000) != 0 )
    {
      result = sub_114D9C();
    }
    else
    {
      if ( (signed int)v19 > 127 )
      {
        do
        {
          v22 = v19 | 0x80;
          v19 >>= 7;
          *v21++ = v22;
        }
        while ( v19 > 0x7F );
      }
      *v21 = v19;
      result = (int)(v21 + 1);
    }
  }
  else
  {
    result = v4;
  }
  return result;
}
