#include<stdio.h>
int main()
{
int i,j, power;
for(i=1; i<=5; i++) 
{
    power = 1;
    for(j=1; j<=i; j++) {
    power=power*i;
    }
    printf("%d, ", power);
}
printf("\n");

return 0;
}