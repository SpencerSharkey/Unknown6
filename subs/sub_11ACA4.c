int sub_11ACA4()
{
  void *v0; // r0@1
  int v1; // r5@1
  int result; // r0@1

  v0 = operator new(0xCu);
  *(_DWORD *)v0 = 0;
  *((_DWORD *)v0 + 1) = 0;
  *((_DWORD *)v0 + 2) = 0;
  dword_1FA3E4 = (int)v0;
  v1 = (int)operator new(4u);
  result = sub_11AC8C(v1);
  dword_1FA3E8 = v1;
  return result;
}