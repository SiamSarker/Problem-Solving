#include <stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}

int perm(int n, int r)
{
    if (r == 0)
        return 1;
    else if (n == r)
        return fact(n);
    else
        return r * perm(n - 1, r - 1) + perm(n - 1, r);
}

int main()
{
    int a = perm(7, 4);
    printf("%d \n", a);
    return 0;
}