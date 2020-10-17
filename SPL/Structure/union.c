#include "stdio.h"
#include "string.h"
union test1{
  int x, y;
};
union test2{
  char ch;
  int x;
};
union test3{
  char name[20];
  double d;
};
struct test4{
  int x;
  int y;
  double z;
};

int main(int argc, char const *argv[]) {
  union test1 t1;
  union test2 t2;
  union test3 t3;
  struct test4 t4;
    printf("sizeof(t1) = %lu\n", sizeof(t1));
    printf("the size of t2 = %lu\n", sizeof(t2));
    printf("the size of t3 = %lu\n", sizeof(t3));
    printf("the size of t4 = %lu\n", sizeof(t4));

  return 0;
}
