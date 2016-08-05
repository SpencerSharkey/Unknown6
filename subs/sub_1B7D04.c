void *__fastcall sub_1B7D04(unsigned int a1, unsigned int a2)
{
  int v2; // r4@1
  int v3; // r0@5
  void *result; // r0@10

  v2 = a1;
  if ( a1 > 0x3FFFFFFC )
    sub_1B7044((unsigned int)"basic_string::_S_create");
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    v3 = (unsigned int)(v2 + 29) > 0x1000;
    if ( a2 >= v2 )
      v3 = 0;
    if ( v3 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 29) & 0xFFF);
      if ( (unsigned int)v2 >= 0x3FFFFFFC )
        v2 = 1073741820;
    }
  }
  result = operator new(v2 + 13);
  *((_DWORD *)result + 1) = v2;
  *((_DWORD *)result + 2) = 0;
  return result;
}