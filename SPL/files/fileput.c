#include "stdio.h"
#include<string.h>

int main() {
  FILE *file;
  char name[] = "Alamin Sarker";
  int length = strlen(name);
  int i;

  file = fopen("test.txt", "a");
  if(file == NULL)
    printf("File doesn't exist\n");
  else
  {
    printf("File is opened\n");
    for(i = 0; i<length; i++)
    {
      fputc(name[i], file);
    }
    fclose(file);
  }

  return 0;
}