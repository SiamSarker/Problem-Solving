#include <stdio.h>

struct S {
    int a;
    char c;
    float f;
};

int main()
{
    struct S p;
    p.a = 10;
    p.c = 'r';
    p.f = 3.14;

    printf("%d %c %f\n", p.a, p.c, p.f);

    struct S *ptr = &p;

    printf("%d %c %f\n", ptr->a, ptr->c, ptr->f);

    ptr -> a = 14;
    ptr -> c = 's';
    ptr -> f = 4.16;

    printf("%d %c %f\n", ptr->a, ptr->c, ptr->f);

    return 0;
}