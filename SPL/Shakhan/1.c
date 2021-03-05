#include<stdio.h>
int main()
{

   
     printf("How many terms :\n");
     int n;
     scanf("%d",&n);
     int st=3;
     int sum=2;
     int i;
     for (i = 2; i <= n; i++)
     {
         sum+=(st*i);
         st+=i;
     }
     printf("The series sum is: %d\n",sum);

     




}