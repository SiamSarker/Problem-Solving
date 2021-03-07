#include <stdio.h>

int digit_sum(int num)
{
    if (num >= 0 && num <=7)
        return num;
    else
        return 10 * digit_sum(num/8) + num%8 ;
        // to binary return 10 * digit_sum(num/2) + num%2 ;
}


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digit_sum(num));
    return 0;
}
