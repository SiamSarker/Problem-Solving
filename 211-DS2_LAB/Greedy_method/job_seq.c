#include <stdio.h>
#include <stdlib.h>

typedef struct Task{
    int Taskid;
    int deadline;
    int profit;
} Task;

int cmpfunc(const void * a, const void * b) {
//   return ( ((Item*)b)->value / ((Item*)b)->weight -
//           ((Item*)a)->value / ((Item*)a)->weight );
// update here
}

int main() {
    // write your code here
    Task tasks[] = {{1, 9, 15},
                    {2, 2, 2},
                    {3, 5, 18},
                    {4, 7, 1},
                    {5, 4, 25},
                    {6, 2, 20},
                    {7, 5, 8},
                    {8, 7, 10},
                    {9, 4, 12},
                    {10, 3, 5}};

    int n=10;
    for(int i=0; i<n; i++) {
        printf("%d %d %d\n", tasks[i].Taskid, tasks[i].deadline, tasks[i].profit);
    }

    return 0;
}
