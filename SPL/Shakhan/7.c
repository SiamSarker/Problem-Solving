#include <stdio.h>
#include <string.h>
 
struct Soldier 
{
           char id[20];
           int age;
           float weight;
};
 
void takeInput(struct Soldier *soldier1);
 
int main() 
{
          struct Soldier soldier1;

        takeInput(&soldier1);
          
          printf("Id: %s \n", soldier1.id);
          printf("Age: %d \n", soldier1.age);
          printf("Weight: %f \n", soldier1.weight);

          return 0;
}
 
void takeInput(struct Soldier *soldier1)
{

        scanf("%s", &soldier1->id);
        scanf("%d", &soldier1->age);
        scanf("%f", &soldier1->weight);

}