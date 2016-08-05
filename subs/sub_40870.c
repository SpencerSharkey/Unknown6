int __fastcall sub_40870(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r6@1
  signed int v14; // r0@15
  signed int v24; // r0@34
  int result; // r0@35
  _BYTE *v26; // r2@36
  char v27; // r3@38
  _BYTE *v28; // r2@40
  char v29; // r3@42

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_BYTE *)a2 = 8;
    a2 = sub_114D9C(v3, HIDWORD(v3), a2 + 1);
  }
  _R2 = *(_QWORD *)(v2 + 24);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 25;
  }
  _R2 = *(_QWORD *)(v2 + 32);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 33;
  }
  _R2 = *(_QWORD *)(v2 + 40);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 41;
  }
  _R2 = *(_QWORD *)(v2 + 48);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 49;
  }
  _R2 = *(_QWORD *)(v2 + 56);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 57;
  }
  _R2 = *(_QWORD *)(v2 + 64);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 65;
  }
  v14 = *(_DWORD *)(v2 + 112);
  if ( v14 )
  {
    *(_BYTE *)a2 = 72;
    v28 = (_BYTE *)(a2 + 1);
    if ( v14 < 0 )
    {
      a2 = sub_114D9C(v14, v14 >> 31, v28);
    }
    else
    {
      if ( v14 > 127 )
      {
        do
        {
          v29 = v14 | 0x80;
          v14 = (unsigned int)v14 >> 7;
          *v28++ = v29;
        }
        while ( (unsigned int)v14 > 0x7F );
      }
      *v28 = v14;
      a2 = (int)(v28 + 1);
    }
  }
  _R2 = *(_QWORD *)(v2 + 72);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 81;
  }
  _R2 = *(_QWORD *)(v2 + 80);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 89;
  }
  _R2 = *(_QWORD *)(v2 + 88);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 97;
  }
  _R2 = *(_QWORD *)(v2 + 96);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 105;
  }
  _R2 = *(_QWORD *)(v2 + 104);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 113;
  }
  _R2 = *(_QWORD *)(v2 + 120);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 1) = _R2;
    *(_BYTE *)(a2 + 5) = BYTE4(_R2);
    *(_BYTE *)(a2 + 3) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 4) = BYTE3(_R2);
    *(_BYTE *)(a2 + 2) = BYTE1(_R2);
    *(_BYTE *)(a2 + 7) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 6) = BYTE5(_R2);
    *(_BYTE *)(a2 + 8) = BYTE7(_R2);
    a2 += 9;
    *(_BYTE *)(a2 - 9) = 121;
  }
  _R2 = *(_QWORD *)(v2 + 128);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 2) = _R2;
    *(_BYTE *)(a2 + 6) = BYTE4(_R2);
    *(_BYTE *)(a2 + 4) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 5) = BYTE3(_R2);
    *(_BYTE *)(a2 + 3) = BYTE1(_R2);
    *(_BYTE *)(a2 + 8) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 9) = BYTE7(_R2);
    *(_BYTE *)(a2 + 7) = BYTE5(_R2);
    *(_BYTE *)a2 = -127;
    a2 += 10;
    *(_BYTE *)(a2 - 9) = 1;
  }
  _R2 = *(_QWORD *)(v2 + 136);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 2) = _R2;
    *(_BYTE *)(a2 + 6) = BYTE4(_R2);
    *(_BYTE *)(a2 + 4) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 5) = BYTE3(_R2);
    *(_BYTE *)(a2 + 3) = BYTE1(_R2);
    *(_BYTE *)(a2 + 8) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 9) = BYTE7(_R2);
    *(_BYTE *)(a2 + 7) = BYTE5(_R2);
    *(_BYTE *)a2 = -119;
    a2 += 10;
    *(_BYTE *)(a2 - 9) = 1;
  }
  _R2 = *(_QWORD *)(v2 + 144);
  __asm
  {
    VMOV            D7, R2, R3
    VCMP.F64        D7, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
  {
    *(_BYTE *)(a2 + 2) = _R2;
    *(_BYTE *)(a2 + 6) = BYTE4(_R2);
    *(_BYTE *)(a2 + 4) = (unsigned int)_R2 >> 16;
    *(_BYTE *)(a2 + 5) = BYTE3(_R2);
    *(_BYTE *)(a2 + 3) = BYTE1(_R2);
    *(_BYTE *)(a2 + 8) = HIDWORD(_R2) >> 16;
    *(_BYTE *)(a2 + 9) = BYTE7(_R2);
    *(_BYTE *)(a2 + 7) = BYTE5(_R2);
    *(_BYTE *)a2 = -111;
    a2 += 10;
    *(_BYTE *)(a2 - 9) = 1;
  }
  v24 = *(_DWORD *)(v2 + 116);
  if ( v24 )
  {
    *(_BYTE *)a2 = -104;
    v26 = (_BYTE *)(a2 + 2);
    *(_BYTE *)(a2 + 1) = 1;
    if ( v24 < 0 )
    {
      result = sub_114D9C(v24, v24 >> 31, v26);
    }
    else
    {
      if ( v24 > 127 )
      {
        do
        {
          v27 = v24 | 0x80;
          v24 = (unsigned int)v24 >> 7;
          *v26++ = v27;
        }
        while ( (unsigned int)v24 > 0x7F );
      }
      *v26 = v24;
      result = (int)(v26 + 1);
    }
  }
  else
  {
    result = a2;
  }
  return result;
}
