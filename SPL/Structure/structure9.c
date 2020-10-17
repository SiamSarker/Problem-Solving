#include "stdio.h"
#include "string.h"
struct person
{
  char name[20];
  int age;
  float salary;
};

void display(struct person p)
{
  printf("Name : %s\n", p.name);
  printf("Age : %d\n", p.age);
  printf("Salary : %.2f\n", p.salary);
}

int main(int argc, char const *argv[]) {
  struct person person1;
  strcpy(person1.name, "Siam Sarker");
  person1.age = 22;
  person1.salary = 34.56;

  display(person1);

    return 0;
}
