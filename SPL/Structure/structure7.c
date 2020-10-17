#include "stdio.h"

struct person
{
  int age;
  float salary;
};

int main(int argc, char const *argv[]) {
  struct person person[4];
  int i;
  for(i = 0; i<2; i++)
  {
    printf("person %d: \n", i+1);
    printf("Age : ");
    scanf("%d", &person[i].age);
    printf("\nSalary : ");
    scanf("%f", &person[i].salary);
  }

  for(i = 0; i<2; i++)
  {
    printf("person %d: \n", i+1);
    printf("Age : %d \n", person[i].age);
  //  scanf("%d", &person[i].age);
    printf("Salary : %.2f\n", person[i].salary);
  //  scanf("%f", &person[i].salary);
  }

  return 0;
}
