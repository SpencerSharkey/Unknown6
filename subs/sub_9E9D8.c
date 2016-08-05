void __fastcall sub_9E9D8(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  void *v4; // r0@1
  void **v5; // r4@1
  void *v6; // r3@1
  void *v7; // r5@1
  void *v8; // t1@2
 
  v2 = a1;
  v3 = a2;
  v4 = malloc(0x32Cu);
  v5 = &off_1F7060;//Function table Offset
  v6 = off_1F7060;//Function table Offset
  v7 = v4;
  if ( off_1F7060 )
  {
    do
    {
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v6)(v7, v2, v3); //Use current entry(1st iteration -> first func)
      v8 = v5[1];//<<<<<----- JUMP to next func
      ++v5;
      v6 = v8;
    }
    while ( v8 );//<<--- Use all functions in the list till the function ptr is 0
  }
  j_j_free(v7);
}