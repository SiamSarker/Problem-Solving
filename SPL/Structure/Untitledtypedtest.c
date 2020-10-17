#include "stdio.h"

struct book
{
  char name[20];
  int price;
};

int main(int argc, char const *argv[]) {
  typedef struct book Book;

  Book b = {"English Book", 350};
  printf("Name = %s\n", b.name);
  printf("prize %d\n", b.price);

  typedef char LETTER;
  LETTER ch;
  ch = 'A';
printf("ch = %c\n", ch);

  LETTER ch1;
  ch1 = 'B';

  printf("ch = %c\n", ch1);
  return 0;
}
