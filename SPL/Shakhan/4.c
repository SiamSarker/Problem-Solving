#include<stdio.h>
int main()
{

     int num;
     printf("Enter a number\n");

     scanf("%d",&num);
     int c=0;
     int sum=0;
     while (num!=0)
     {
         sum+=num%10;
         num/=10;
         c++;
     }
     
     printf("The number has %d digits which sum is to %d\n",c,sum);

     




}