int __fastcall sub_3F694(int a1)
{
  int v2; // r4@2
  signed int v7; // r0@4
  int v8; // r0@18
  signed int v9; // r0@23
  int v10; // r0@43

  _R5 = a1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = sub_115284() + 1;
  else
    v2 = 0;
  __asm { VLDR            D7, [R5,#0x18] }
  v7 = *(_DWORD *)(_R5 + 112);
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x20]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x28]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x30]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x38]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x40]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  if ( v7 )
  {
    if ( v7 >= 0 )
    {
      if ( v7 > 127 )
        v8 = sub_11525C(v7) + 1;
      else
        v8 = 2;
    }
    else
    {
      v8 = 11;
    }
    v2 += v8;
  }
  __asm { VLDR            D7, [R5,#0x48] }
  v9 = *(_DWORD *)(_R5 + 116);
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x50]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x58]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x60]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x68]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x78]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x80]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 9;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x88]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 10;
  __asm
  {
    VCMP.F64        D7, #0.0
    VLDR            D7, [R5,#0x90]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 10;
  __asm
  {
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v2 += 10;
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
    v2 += v10;
  }
  *(_DWORD *)(_R5 + 152) = v2;
  return v2;
}
