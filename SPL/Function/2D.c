#include <stdio.h>
#include <stdlib.h>

void print2DArray(int b[3][4]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
int find_max(int a[3][4]){
    int max = 0, i, j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if( a[i][j] > max) max = a[i][j];
        }
    }
    return max;
}
int main()
{
    int a[3][4], i, j, m;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            a[i][j] = rand() % 10;
        }
    }
    print2DArray(a);
    m = find_max(a);
    printf("Maximum is %d\n", m);
    return 0;
}
