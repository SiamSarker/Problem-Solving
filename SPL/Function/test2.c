#include<stdio.h>
int call(int a[], int n)
{
    int sum=0,i;
   for(i=0;i<n;i++)
     {
         sum=sum+a[i];
     }
    printf("%d\n", sum);
    return sum;
}

int main()
{
    int i,j,n,sum,a[20];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sum = call(a, n);
    printf("%d\n",sum);
    return 0;
}
