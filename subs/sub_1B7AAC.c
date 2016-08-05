int __fastcall sub_1B7AAC(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@3

  v2 = *(_DWORD *)result;
  if ( *(_DWORD *)(*(_DWORD *)result - 4) < 0 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)(*(_DWORD *)a2 - 4) < 0 )
    *(_DWORD *)(v3 - 4) = 0;
  *(_DWORD *)result = v3;
  *(_DWORD *)a2 = v2;
  return result;
}