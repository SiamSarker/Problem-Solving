#include "stdio.h"
int main(int argc, char const *argv[]) {
  int *p, q;
  p = &q;
  *p = 199;
  printf("%d\n", q);
  return 0;
}
