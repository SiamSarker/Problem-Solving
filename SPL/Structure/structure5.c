#include "stdio.h"

struct person
{
  int age;
  float salary;
};

int main(int argc, char const *argv[]) {
  struct person person1 = {27, 2550.50};
  struct person person2, person3;

  person2.age = 25;
  person2.salary = 56.7;

  person3 = person2;


  printf("Age = %d\n", person1.age);
  printf("Salary = %.2f\n", person1.salary);

  printf("\nAge = %d\n", person2.age);
  printf("Salary = %.2f\n", person2.salary);

  printf("\nAge = %d\n", person3.age);
  printf("Salary = %.2f\n", person3.salary);


/*  printf("Age = %d\n", person2.age);
  printf("Salary = %.2f\n", person2.salary);
*/
  return 0;
}
