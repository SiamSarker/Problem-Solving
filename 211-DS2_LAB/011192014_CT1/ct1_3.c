#include <stdio.h>

int to_power(int x, int y) {
    if (y != 0)
        return (x * to_power(x, y - 1));
    else
        return 1;
}

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n", to_power(x, y));
    return 0;
}