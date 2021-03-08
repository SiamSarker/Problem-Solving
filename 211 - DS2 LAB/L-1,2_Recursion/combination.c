#include<stdio.h>

int comb(int n, int r)
{
    if (r == 0) return 1;
    else if (n == r) return 1;
    else return comb(n-1, r) + comb(n-1, r-1);
}

int main()
{
    int a = comb(7,4);
    printf("%d \n", a);
    return 0;
}