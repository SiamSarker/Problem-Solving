#include "stdio.h"

struct person
{
  int age;
  float salary;
};

int main(int argc, char const *argv[]) {
  struct person person1, person2;

  scanf("%d", &person1.age);
  scanf("%f", &person1.salary);

  printf("Age = %d\n", person1.age);
  printf("Salary = %.2f\n", person1.salary);

    scanf("%d", &person2.age);
    scanf("%f", &person2.salary);


  printf("Age = %d\n", person2.age);
  printf("Salary = %.2f\n", person2.salary);

  return 0;
}
