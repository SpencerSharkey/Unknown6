_DWORD *__fastcall sub_43B30(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v2; // r0@1
  _DWORD *result; // r0@2
  void *v4; // r5@3

  v1 = a1;
  *a1 = &off_1F3F78;
  sub_43720();
  v2 = v1[1];
  if ( !(v2 & 1) || (v4 = (void *)(v2 & 0xFFFFFFFE), *(_DWORD *)((v2 & 0xFFFFFFFE) + 4)) )
  {
    sub_101544(v1);
    result = v1;
  }
  else
  {
    sub_10EAE8(v2 & 0xFFFFFFFE);
    operator delete(v4);
    sub_101544(v1);
    result = v1;
  }
  return result;
}
