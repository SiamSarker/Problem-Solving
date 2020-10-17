#include<stdio.h>
int sum = 0;
int digitSum(int n)
{
    sum += n%10;
    if(n == 0) return sum;
    else
        return digitSum(n/10);
    
}
int main(void)
{

    printf("Sum is %d\n", digitSum(455));
    return 0;
}