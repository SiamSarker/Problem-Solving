#include<stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}

int main()
{
    int a = fact(10);
    for(int i = 1; i <=10; i++)
        printf("%d ", fact(i));
    return 0;
}