unsigned int __fastcall sub_8742C(signed int a1)
{
  int v1; // r3@1
  bool v2; // cf@1
  int v3; // r0@1

  v1 = a1 + 255;
  v2 = a1 < 0;
  v3 = a1 & ~(a1 >> 32);
  if ( v2 )
    v3 = v1;
  return (v3 & 0xFFFFFF00) + 288;
}
