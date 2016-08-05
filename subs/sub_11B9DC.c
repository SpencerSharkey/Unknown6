int __fastcall sub_11B9DC(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int result; // r0@1
  int v6; // r3@2
  void (__fastcall *v7)(int); // r2@5
  int v8; // r5@6
  int v9; // r0@6
  int v10; // r0@11
  int v11; // r5@11

  v2 = *(_DWORD *)a1;
  v3 = a1;
  v4 = a2;
  result = ((int (*)(void))dword_1F7004)();
  if ( v2 != 2 )
  {
    v6 = *(_DWORD *)v3;
    do
    {
      result = dword_1F7008(0, 1, v3);
      if ( !result )
      {
        v7 = *(void (__fastcall **)(int))(*(_DWORD *)v4 + 8);
        if ( v7 == sub_11AAC8 )
        {
          v8 = *(_BYTE *)(v4 + 8);
          v9 = (*(int (**)(void))(v4 + 4))();
          if ( v8 )
            v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
        }
        else
        {
          v9 = ((int (__fastcall *)(int))v7)(v4);
        }
        result = dword_1F7004(v9);
        *(_DWORD *)v3 = 2;
        return result;
      }
    }
    while ( !*(_DWORD *)v3 );
    if ( *(_DWORD *)v3 == 1 )
    {
      do
      {
        v10 = sched_yield();
        v11 = *(_DWORD *)v3;
        result = dword_1F7004(v10);
      }
      while ( v11 == 1 );
    }
  }
  return result;
}