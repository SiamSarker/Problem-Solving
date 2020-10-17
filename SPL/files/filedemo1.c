#include "stdio.h"

int main() {
  FILE *file;
  FILE *file1;

  file = fopen("input.txt", "r");
  if(file == NULL)
    printf("File doesn't exist\n");
  else
  {
    printf("File is opened\n");
    fclose(file);
  }
  file1 = fopen("test34.txt", "w");
  fprintf(file1, "%s\n", file);
  fclose(file1);

  return 0;
}
