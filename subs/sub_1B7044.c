void __fastcall __noreturn sub_1B7044(unsigned int a1)
{
  unsigned int v1; // r8@1
  int v2; // r5@1
  int v3; // [sp+4h] [bp+4h]@1
  int v4; // [sp+Ch] [bp+Ch]@1

  v1 = a1;
  v2 = (int)_cxa_allocate_exception(8);
  sub_1B8850((int)&v4, v1, (int)&v3);
  sub_1ABF04(v2, (int)&v4);
  if ( (_UNKNOWN *)(v4 - 12) != &unk_200B34 )
    sub_1B6F2C((void *)(v4 - 12));
  _cxa_throw(v2, (int)&off_1F5E50, (int)sub_1ABDEC, -156);
}