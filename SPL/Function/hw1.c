#include "stdio.h"
#include <string.h>
struct employee{
  char name[20];
  char designation[20];
  float salary;
};

int find_the_employee()
{
  struct employee emp[10];
  int z;
  for(int i = 0; i<10; i++)
  {
    for(int j = 0; j != 0; j++)
    {
      z = stcmp(emp[i].designation[j], emp[i+1].designation[j]);
      
    }
  }
}

int main() {
  struct employee emp[10];
  for(int i = 0; i<10; i++)
  {
    scanf("%s", emp[i].name);
    scanf("%s", emp[i].designation);
    scanf("%d", emp[i].salary);
  }
  return 0;
}
