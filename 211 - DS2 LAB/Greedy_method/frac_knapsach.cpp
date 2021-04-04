#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>
#include<stdlib.h>

using namespace std;

typedef struct Item{
    float value;
    float weight;
    
} Item;

int cmpfunc(const void *a, const void *b)
{
    return (((Item*)a)->value / ((Item*)a)->value - (Item*)b) / ((Item*)b)->weight);
}

int main()
{
    Item items[] = {{60, 10}, {100, 20}, {120, 30}};

    for (int i = 0; i < 3; i++)
    {
        printf("%.2f %.2f\n", items[i].value, items[i].weight);
    }

    qsort(items, 3, sizeof(Item), cmpfunc);


    return 0;
}