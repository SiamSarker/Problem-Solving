#include <stdio.h>
#include <stdlib.h>
 
int cmpfunc(const void * a, const void * b) {
   return (*(int*)b - *(int*)a);;
}
 
int main() {
 
    int coins[] = {1, 5, 10, 25, 100, 1000};

    qsort(coins, 6, sizeof(int), cmpfunc);

    int total = 5465;
    int M = total;
    int i = 0;
    while ( M > 0)
    {
        int c = coins[i];
        int req_num_coin = M/c;
        if( req_num_coin > 0)
        {
            printf("Take %d %d times\n", coins[i], req_num_coin);
        }
        M = M%c;
        i++;
    }


    return 0;
}
 