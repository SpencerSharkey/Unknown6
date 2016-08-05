int __fastcall sub_11AC8C(int a1)
{
  int v1; // r4@1
  pthread_mutex_t *v2; // r0@1

  v1 = a1;
  v2 = (pthread_mutex_t *)operator new(4u);
  *(_DWORD *)v1 = v2;
  pthread_mutex_init(v2, 0);
  return v1;
}