int __fastcall sub_11AB78(int a1)
{
  int v1; // r5@1
  int result; // r0@1
  void **v3; // [sp+4h] [bp-1Ch]@2
  void (*v4)(); // [sp+8h] [bp-18h]@2
  char v5; // [sp+Ch] [bp-14h]@2

  v1 = dword_1FA3E0;
  result = dword_1F7004(a1);
  if ( v1 != 2 )
  {
    v5 = 0;
    v4 = sub_11B9B4;
    v3 = &off_1F57D0;
    result = sub_11B9DC((int)&dword_1FA3E0, (int)&v3);
  }
  return result;