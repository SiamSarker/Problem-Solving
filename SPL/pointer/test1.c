#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a = 5, arr[2][2];
  int *p;
  *p = &a;


  printf("a = %p\n", &a);
  printf("p = %p\n", &p);
  printf("value = %p\n", *&p);
  return 0;
}
