signed int __fastcall sub_115284(unsigned int a1, unsigned int a2)
{
  bool v2; // cf@1
  bool v3; // cf@4
  bool v4; // cf@8
  bool v5; // cf@12
  signed int result; // r0@7
  bool v7; // cf@16
  bool v8; // cf@20
  bool v9; // cf@24
  bool v10; // cf@32

  v2 = a2 >= 8;
  if ( a2 == 8 )
    v2 = 1;
  if ( v2 )
  {
    v5 = a2 >= 0x400;
    if ( a2 == 1024 )
      v5 = 1;
    if ( v5 )
    {
      v7 = a2 >= 0x20000;
      if ( a2 == 0x20000 )
        v7 = 1;
      if ( v7 )
      {
        v9 = a2 >= 0x1000000;
        if ( a2 == 0x1000000 )
          v9 = 1;
        if ( v9 )
        {
          if ( (a2 & 0x80000000) != 0 )
            result = 10;
          else
            result = 9;
        }
        else
        {
          result = 8;
        }
      }
      else
      {
        result = 7;
      }
    }
    else
    {
      result = 6;
    }
  }
  else
  {
    v3 = 1;
    if ( !a2 )
      v3 = a1 >= 0x80;
    if ( v3 )
    {
      v4 = 1;
      if ( !a2 )
        v4 = a1 >= 0x4000;
      if ( v4 )
      {
        v8 = 1;
        if ( !a2 )
          v8 = a1 >= 0x200000;
        if ( v8 )
        {
          v10 = 1;
          if ( !a2 )
            v10 = a1 >= 0x10000000;
          if ( v10 )
            result = 5;
          else
            result = 4;
        }
        else
        {
          result = 3;
        }
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      result = 1;
    }
  }
  return result;
}
