#include <stdio.h>
int main() {
    int i, n, t1 = 2, t2 = 0, nextTerm = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        nextTerm += t1;
        t2 = 2*t1;
        t1 = t2;
    }

    printf("Sum is %d\n", nextTerm);

    return 0;
}