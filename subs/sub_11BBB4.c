int __fastcall sub_11BBB4(int a1, const char *a2, int a3, int a4)
{
  int v4; // r5@1
  int varg_r2; // [sp+18h] [bp-8h]@1
  int varg_r3; // [sp+1Ch] [bp-4h]@1

  varg_r2 = a3;
  varg_r3 = a4;
  v4 = a1;
  *(_DWORD *)a1 = &unk_200B40;
  sub_11BB2C(a1, a2, &varg_r2);
  return v4;
}