#include "stdio.h"

struct person
{
  int age;
  float salary;
};

int main(int argc, char const *argv[]) {
  struct person person1, person2;

  person1.age = 27;
  person1.salary = 2750.50;

  printf("Age = %d\n", person1.age);
  printf("Salary = %.2f\n", person1.salary);

  person2.age = 35;
  person2.salary = 4560.50;

  printf("Age = %d\n", person2.age);
  printf("Salary = %.2f\n", person2.salary);

  return 0;
}
