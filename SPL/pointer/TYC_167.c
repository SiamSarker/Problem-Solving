#include "stdio.h"
int main(int argc, char const *argv[]) {
  int *p, q;
  q = 199; // assign q 199
  p = &q; // assign p the address of q
  printf("%d\n", *p); // dispalys q's value using pointers
  return 0;
}
