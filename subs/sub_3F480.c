unsigned int __fastcall sub_3F480(int a1)
{
  _DWORD *v2; // r6@1
  unsigned int v3; // r4@1
  int v4; // r0@3
  signed int v9; // r0@8
  int v10; // r0@24
  signed int v11; // r0@31
  int v12; // r0@33

  _R5 = a1;
  v2 = *(_DWORD **)(a1 + 12);
  v3 = *(_DWORD *)(*v2 - 12);
  if ( v3 )
  {
    if ( v3 > 0x7F )
    {
      v4 = sub_11525C(*(_DWORD *)(*v2 - 12));
      v3 = *(_DWORD *)(*v2 - 12);
    }
    else
    {
      v4 = 1;
    }
    v3 += v4 + 1;
  }
  if ( *(_QWORD *)(_R5 + 16) )
    v3 += sub_115284() + 1;
  __asm { VLDR            S15, [R5,#0x18] }
  v9 = *(_DWORD *)(_R5 + 52);
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x1C]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 5;
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x20]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 5;
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x24]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 5;
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x28]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 6;
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x2C]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 6;
  __asm
  {
    VCMP.F32        S15, #0.0
    VLDR            S15, [R5,#0x30]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 6;
  __asm
  {
    VCMP.F32        S15, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v3 += 6;
  if ( v9 )
  {
    if ( v9 >= 0 )
    {
      if ( v9 > 127 )
        v10 = sub_11525C(v9) + 2;
      else
        v10 = 3;
    }
    else
    {
      v10 = 12;
    }
    v3 += v10;
  }
  if ( *(_QWORD *)(_R5 + 56) )
    v3 += sub_115284() + 2;
  v11 = *(_DWORD *)(_R5 + 64);
  if ( v11 )
  {
    if ( v11 >= 0 )
    {
      if ( v11 > 127 )
        v12 = sub_11525C(v11) + 2;
      else
        v12 = 3;
    }
    else
    {
      v12 = 12;
    }
    v3 += v12;
  }
  *(_DWORD *)(_R5 + 68) = v3;
  return v3;
}
