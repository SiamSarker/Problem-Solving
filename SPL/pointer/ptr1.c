#include "stdio.h"
int main(int argc, char const *argv[]) {
  int x = 10, y = 20, temp;

  int *ptr1, *ptr2;

  ptr1 = &x;
  ptr2 = &y;

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

//  sum = *ptr1 + *ptr2;

  printf("X and Y = %d %d\n", x, y);
  return 0;
}
