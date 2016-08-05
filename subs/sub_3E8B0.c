signed int __fastcall sub_3E8B0(int a1)
{
  signed int v1; // r3@2

  if ( *(_BYTE *)(a1 + 9) )
    v1 = 2;
  else
    v1 = 0;
  if ( *(_BYTE *)(a1 + 10) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 11) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 12) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 13) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 14) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 15) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 16) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 17) )
    v1 += 2;
  if ( *(_BYTE *)(a1 + 18) )
    v1 += 2;
  *(_DWORD *)(a1 + 20) = v1;
  return v1;
}
