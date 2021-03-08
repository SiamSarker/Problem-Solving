// euclidean gcd 
// gcd(a,b) = b if a%b == 0
//         = gcd (b, a%b) otherwise
#include<stdio.h>
int gcd(int a, int b){
    if (a%b == 0) return b;
    else return gcd(b, a%b);
}

int main()
{
    int a = gcd(23, 6);
    printf("%d ", a);
}
