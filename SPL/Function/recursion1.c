#include<stdio.h>
int sum(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("Total = %d\n", sum(n));
}
int sum(int n)
{
    if(n < 1) return 0;
    return n += sum(n-1);
}