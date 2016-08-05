void __fastcall sub_1B6F2C(void *a1)
{
  unsigned int *v1; // r3@1
  unsigned int v2; // r2@2

  __dmb();
  v1 = (unsigned int *)((char *)a1 + 8);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  __dmb();
  if ( (signed int)v2 <= 0 )
    operator delete(a1);
}