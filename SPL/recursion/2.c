#include<stdio.h>

int fibb(int n)
{
    if(n<=1)
    return n;
    else
    return fibb(n-1) + fibb(n-2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = fibb(n);
    printf("Sum is %d\n", sum);
    return 0;
}