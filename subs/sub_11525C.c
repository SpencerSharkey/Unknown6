signed int __fastcall sub_11525C(unsigned int a1)
{
  signed int result; // r0@3

  if ( a1 <= 0x7F )
  {
    result = 1;
  }
  else if ( a1 >= 0x4000 )
  {
    if ( a1 >= 0x200000 )
    {
      if ( a1 >= 0x10000000 )
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
  return result;
}
