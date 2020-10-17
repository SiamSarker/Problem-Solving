//for constnt structure

#include "stdio.h"

enum days_of_week
{
  Sun, Mon, Tue, Wed, Thu, Fri, Sat
};

int main(int argc, char const *argv[]) {
  enum days_of_week day1, day2;

  day1 = Tue;
  day2 = Fri;


  int dif = day2-day1;

  printf("difference %d\n", dif);
  return 0;
}
