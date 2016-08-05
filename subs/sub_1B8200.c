void *__fastcall sub_1B8200(int a1, int a2, int a3)
{
  int v3; // r4@1
  void *v4; // r0@1
  size_t v5; // r2@1
  void *v6; // r5@1
  void *result; // r0@1

  v3 = a1;
  v4 = basic_string::_S_create(*(_DWORD *)a1 + a3, *(_DWORD *)(a1 + 4));
  v5 = *(_DWORD *)v3;
  v6 = v4;
  result = (char *)v4 + 12;
  if ( *(_DWORD *)v3 )
  {
    if ( v5 == 1 )
    {
      result = (char *)v6 + 12;
      *((_BYTE *)v6 + 12) = *(_BYTE *)(v3 + 12);
      v5 = *(_DWORD *)v3;
    }
    else
    {
      result = memcpy((char *)v6 + 12, (const void *)(v3 + 12), v5);
      v5 = *(_DWORD *)v3;
    }
  }
  if ( v6 != &unk_200B34 )
  {
    *(_DWORD *)v6 = v5;
    *((_DWORD *)v6 + 2) = 0;
    *((_BYTE *)v6 + v5 + 12) = 0;
  }
  return result;
}
