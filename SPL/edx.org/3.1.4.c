#include "stdio.h"
int main(int argc, char const *argv[]) {
  char dataType;
  int value;
  scanf("%c", &dataType);
  if(dataType == 'i')
  {
    scanf("%d", &value);
    int byte = 0, kbyte = 0, mbyte = 0;
    int size = value * sizeof(int);
    while(size != 0)
    {
      byte = size % 1000;
      size = size / 1000;
      if(size == 0) {
        printf("%d B\n", byte);
        break;
      }

      kbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d KB and %d B\n", kbyte, byte);
        break;
      }
      mbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d MB and %d KB and %d B\n", mbyte, kbyte, byte);
        break;
      }
    }
  }

  else if(dataType == 'd')
  {
    scanf("%d", &value);
    int byte = 0, kbyte = 0, mbyte = 0;
    int size = value * sizeof(double);
    while(size != 0)
    {
      byte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d B\n", byte);
        break;
      }

      kbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d KB and %d B\n", kbyte, byte);
        break;
      }
      mbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d MB and %d KB and %d B\n", mbyte, kbyte, byte);
        break;
      }
    }
  }

  else if(dataType == 'c')
  {
    scanf("%d", &value);
    int byte = 0, kbyte = 0, mbyte = 0;
    int size = value * sizeof(char);
    while(size != 0)
    {
      byte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d B\n", byte);
        break;
      }

      kbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d KB and %d B\n", kbyte, byte);
        break;
      }
      mbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d MB and %d KB and %d B\n", mbyte, kbyte, byte);
        break;
      }
    }
  }

  else if(dataType == 's')
  {
    scanf("%d", &value);
    int byte = 0, kbyte = 0, mbyte = 0;
    int size = value * sizeof(short);
    while(size != 0)
    {
      byte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d B\n", byte);
        break;
      }

      kbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d KB and %d B\n", kbyte, byte);
        break;
      }
      mbyte = size % 1000 ;
      size = size / 1000;
      if(size == 0) {
        printf("%d MB and %d KB and %d B\n", mbyte, kbyte, byte);
        break;
      }
    }
  }
  return 0;
}
