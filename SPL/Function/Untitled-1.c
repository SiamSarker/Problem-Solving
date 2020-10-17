#include <stdio.h>
int passn(n)
{
    n = n - 1;
    if (n == 0)
        return;
    passn(n)
}
int main()
{
    int n;
    scanf("%d", &n)
        passn(n);
            printf("%d", n)
}