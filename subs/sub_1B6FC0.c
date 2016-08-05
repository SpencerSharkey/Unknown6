void __fastcall __noreturn sub_1B6FC0(int a1)
{
  int v1; // r8@1
  int v2; // r5@1
  int v3; // [sp+4h] [bp+4h]@1
  int v4; // [sp+Ch] [bp+Ch]@1

  v1 = a1;
  v2 = (int)_cxa_allocate_exception(8);
  sub_1B8850((int)&v4, v1, (int)&v3);
  sub_1ABEE0(v2, (int)&v4);
  if ( (_UNKNOWN *)(v4 - 12) != &unk_200B34 )
    sub_1B6F2C((void *)(v4 - 12));
  _cxa_throw(v2, (int)&off_1F5E38, (int)sub_1ABD90, -164);
}