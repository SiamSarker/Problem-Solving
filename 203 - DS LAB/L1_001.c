#include <stdio.h>

int main()
{

    int a = 4;
    printf("%d %d\n", a, &a );

    int* p = &a;
    printf("%d %d\n", p, &a );

    printf("%d %d\n", p, *p);

    return 0;
}