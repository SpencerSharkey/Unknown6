void __fastcall sub_11AAC8(int a1)
{
  void *v1; // r4@1
  int v2; // r5@1
  void *(__fastcall *v3)(void *); // r2@2

  v1 = (void *)a1;
  v2 = *(_BYTE *)(a1 + 8);
  (*(void (**)(void))(a1 + 4))();
  if ( v2 )
  {
    v3 = *(void *(__fastcall **)(void *))(*(_DWORD *)v1 + 4);
    if ( v3 == sub_11AA8C )
      operator delete(v1);
    else
      v3(v1);
  }
}