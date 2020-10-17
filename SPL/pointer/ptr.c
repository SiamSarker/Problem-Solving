#include "stdio.h"
int main(int argc, char const *argv[]) {
  int x = 10, y = 20, z = 30;
  int *ptr;

  ptr = &x;
  printf("X is = %d\n", *ptr);
  ptr = &y;
  printf("Y is = %d\n", *ptr);
  ptr = &z;
  printf("Z is = %d\n", *ptr);
  return 0;
}
