#include<stdio.h>
int factorial(int n);
int main(void)
{
    printf("We'll write nCr using function\n\n");
    int n, r;
    float result;
    printf("Take N = ");
    scanf("%d", &n);
    printf("Take R = ");
    scanf("%d", &r);
    result =(float) factorial(n) / factorial(r) * factorial(n-r);
    printf("The Result is %.2f\n", result);
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i<=n; i++)
        fact *= i;
    return fact;
}