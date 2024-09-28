#include <stdio.h>

int fun(int num)
{
    if (num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else if( num == 2)
        return 2;
    else
        return fun(num/2) + fun(num/3);
}


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", fun(num));
    return 0;
}


