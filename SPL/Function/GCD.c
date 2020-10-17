#include<stdio.h>
int gcd(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if( a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("The gcd between %d and %d is: %d\n", m, n, gcd(m, n));
    return 0;
}