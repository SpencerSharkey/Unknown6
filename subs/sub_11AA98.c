void sub_11AA98()
{
  void **v0; // r4@1

  v0 = (void **)dword_1FA3DC;
  if ( dword_1FA3DC )
  {
    pthread_mutex_destroy(*(pthread_mutex_t **)dword_1FA3DC);
    operator delete(*v0);
    operator delete(v0);
  }
  dword_1FA3DC = 0;
}