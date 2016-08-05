void __fastcall sub_11B044(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  pthread_mutex_t **v3; // r6@2
  int v4; // r5@2

  v1 = a1;
  v2 = *a1;
  if ( v2 != 3 )
  {
    sub_11AB78(v2);
    v3 = (pthread_mutex_t **)dword_1FA3DC;
    sub_11B678((pthread_mutex_t **)dword_1FA3DC);
    v4 = dword_1FA3EC;
    sub_11ACE4(v3);
    if ( v4 > 0 )
      goto LABEL_3;
    v2 = *v1;
  }
  off_1F70A4(v2, v1[1], v1[2], v1 + 3);
LABEL_3:
  if ( *v1 == 3 )
    abort();
}