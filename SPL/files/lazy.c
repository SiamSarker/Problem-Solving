#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a, b, sum;
  FILE *fp;
  FILE *fp1;

  fp = fopen("input.txt","r");

  fscanf(fp, "%d", &a);
  fscanf(fp, "%d", &b);
  fp1 = fopen("output.txt","w");

  sum = a+b;
  fprintf(fp1, "sum = %d\n", sum);

  fclose(fp);
  fclose(fp1);
  return 0;
}
