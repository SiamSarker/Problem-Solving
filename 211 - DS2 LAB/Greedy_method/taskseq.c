#include <stdio.h>
#include <stdlib.h>

typedef struct Task{
    int Taskid;
    int deadline;
    int profit;
} Task;

int cmpfunc(const void * a, const void * b) {
   return ( ((Task*)b)->profit - ((Task*)a)->profit );
}

int main() {
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
    

    qsort(tasks, n, sizeof(Task), cmpfunc);

   

    Task task_slot[n];

    for(int i = 0; i < n; i++){
        task_slot[i].Taskid = -1;
    }


    for(int i = 0; i < n; i++ ) {
        for (int j = tasks[i].deadline-1; j >= 0; j--) {
            if(task_slot[j].Taskid == -1 && j < 10) {
                task_slot[j].Taskid = tasks[i].Taskid;
                task_slot[j].deadline = j;
                task_slot[j].profit = tasks[i].profit;
                break;
            }
        }
    }

    for(int i=0; i<n; i++) {
        if(task_slot[i].Taskid != -1) {
            printf("%d %d %d\n", task_slot[i].Taskid, task_slot[i].deadline, task_slot[i].profit);
        }
    }



    return 0;
}