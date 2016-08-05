int __fastcall sub_11ABD0(int a1, const char *a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  size_t v4; // r0@1

  v2 = a1;
  v3 = (unsigned int)a2;
  v4 = strlen(a2);
  basic_string::append(v2 + 12, v3, v4);
  return v2;
}
