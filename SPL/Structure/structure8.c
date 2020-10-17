#include "stdio.h"

struct person
{
  char name[50];
  int age;
  float salary;
};

int main(int argc, char const *argv[]) {
  struct person person[4];
  int i;
  for(i = 0; i<2; i++)
  {
    printf("person :%d\nName: :", i+1);
    fflush(stdin);
    scanf("%[^\n]s", person[i].name);
    printf("Age : ");
    scanf("%d", &person[i].age);
    printf("Salary : ");
    scanf("%f", &person[i].salary);
  }

  printf("\n\n");

  for(i = 0; i<2; i++)
  {
    printf("person %d: \n", i+1);
    printf("Name: %s\n", person[i].name);
    printf("Age : %d \n", person[i].age);
  //  scanf("%d", &person[i].age);
    printf("Salary : %.2f\n", person[i].salary);
  //  scanf("%f", &person[i].salary);
  }

  return 0;
}
