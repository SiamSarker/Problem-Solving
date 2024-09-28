#include <stdio.h>


void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
    printf(" %d %d\n", *x, *y);
}


int main()
{

    int a = 4, b = 2;
    printf("%d %d\n", a, &a );

    int* p = &a;
    printf("%d %d\n", p, &a );

    printf("%d %d\n", a, b);

    swap(&a , &b);

    printf(" %d %d\n", a, b);


    return 0;
}