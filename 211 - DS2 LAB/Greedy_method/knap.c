#include <stdio.h>
#include <stdlib.h>
 
typedef struct Item{
    float value;
    float weight;
} Item;
 
int cmpfunc(const void * a, const void * b) {
   return ( ((Item*)b)->value / ((Item*)b)->weight -
           ((Item*)a)->value / ((Item*)a)->weight );
}
 
int main() {
    Item items[] = {{120, 30}, {60, 10}, {100, 20}};
 
//    for(int i=0; i<3; i++) {
//        printf("%.2f %.2f\n", items[i].value, items[i].weight);
//    }
 
    qsort(items, 3, sizeof(Item), cmpfunc);
 
//    for(int i=0; i<3; i++) {
//        printf("%.2f %.2f\n", items[i].value, items[i].weight);
//    }
 
    float w = 50;
    int i=0;
    while(w>0 && i<3) {
        Item p = items[i];
        float x;
        if(w > p.weight) {
            x = 1;
            printf("Take %.2f %.2f %.2f%%\n", p.value, p.weight, x*100);
        }
        else {
            x = w/p.weight;
            printf("Take %.2f %.2f %.2f%%\n", p.value, p.weight, x*100);
        }
        i++;
        w = w - x*p.weight;
    }
    return 0;
}
 