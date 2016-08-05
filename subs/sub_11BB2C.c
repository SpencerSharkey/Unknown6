void __fastcall sub_11BB2C(int a1, const char *a2, void *a3)
{
  void *v3; // r5@1
  const char *v4; // r7@1
  int v5; // r9@1
  int v6; // r0@1
  size_t v7; // r4@5
  char *v8; // r0@5
  unsigned int v9; // r8@5
  int v10; // r0@5
  int v11; // r4@5
  char s; // [sp+8h] [bp-420h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = vsnprintf(&s, 0x400u, a2, a3);
  if ( v6 >= 1024 )
  {
    v7 = v6 + 1;
    v8 = (char *)operator new[](v6 + 1);
    v9 = (unsigned int)v8;
    v10 = vsnprintf(v8, v7, v4, v3);
    v11 = v10 < (signed int)v7;
    if ( v10 < 0 )
      v11 = 0;
    if ( v11 )
    {
      sub_1B83E4(v5, v9, v10);
      operator delete[]((void *)v9);
    }
    else
    {
      operator delete[]((void *)v9);
    }
  }
  else if ( v6 >= 0 )
  {
    sub_1B83E4(v5, (unsigned int)&s, v6);
  }
}