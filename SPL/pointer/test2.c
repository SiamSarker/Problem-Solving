#include "stdio.h"
int main(int argc, char const *argv[]) {
  int *p;
  int a,n;
  scanf("%d", &n);
  p = &a;
  for(int i=0; i<n; i++)
  {
      scanf("%d", p);
      p++;
      a++;
  }

  /*for(int i=0; i<n; i++)
  {
      printf("%d", *p);
      p++;
  }*/
  printf("%d/n", *p);
  return 0;
}
