#include<stdio.h>
normalint(int *p, int *q);
int main(void)
{
    int a = 8, b = 9;
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    char str[] = "This is a big try";
    int *p, *q;
    int n = normalint(&a, &b);
    return 0;
}

int normalint(int *p,int *q)
{
    int sum = 0;
    return sum = *p + *q;
}