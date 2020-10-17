#include<stdio.h>
int main(void)
{
    int p , q;
    int sum = 0;
    int *a = &p, *b = &q;
    scanf("%d %d", &p, &q);
    sum = *a + *b;
    printf("%d\n", sum);
    return 0;
}