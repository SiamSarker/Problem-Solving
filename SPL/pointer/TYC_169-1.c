#include "stdio.h"
int main(int argc, char const *argv[]) {
  double *p;
  double q, temp;

  temp = 100.23;
  p = &temp;
  q = *p;

  printf("%lf\n", q);
  return 0;
}
