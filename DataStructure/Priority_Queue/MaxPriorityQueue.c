#include <stdio.h>
#include <math.h>

int A[1000];
int length;

void init() {
    length = 0;
}

int left(int i) {
    return 2*i;
}

int right(int i) {
    return 2*i+1;
}

int parent(int i) {
    return i/2;
}

void exchange(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void max_heapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest = i;
    if(l<=length && A[l]>A[i])
        largest = l;
    if(r<=length && A[r]>A[largest])
        largest = r;
    if(largest != i) {
        exchange(&A[i], &A[largest]);
        max_heapify(largest);
    }
}

void build_heap() {
    for(int i=length/2; i>=1; i--)
        max_heapify(i);
}

int extract_max() {
    int max = A[1];
    A[1] = A[length];
    length--;
    max_heapify(1);
    return max;
}

void increase_key(int i, int key) {
    if(A[i]>=key) return;
    A[i] = key;
    while(i>1 && A[parent(i)] < A[i]) {
        exchange(&A[i], &A[parent(i)]);
        i = parent(i);
    }
}

void insert(int key) {
    A[length+1] = -99999;
    length++;
    increase_key(length, key);
}

void print_array() {
    for(int i=1; i<=length; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void print_heap() {
    int n = length;
    int y = log2(n);
    int z = pow(2, y)-1;
    for(int i=0; i<=2*z; i++)
        printf("****");
    printf("\n");
    for(int i=1; i<=n; i++) {
        int  x = floor(log2(n)) - floor(log2(i));
        int k = pow(2, x)-1;
        if(x!=y) {
            for(int i=0; i<=x; i++)
                printf("\n");
        }
        y = x;
        for(int j=0; j<k; j++)
            printf("    ");
        printf("%4d", A[i]);
        for(int j=0; j<=k; j++)
            printf("    ");
    }
    printf("\n");
    for(int i=0; i<=2*z; i++)
        printf("****");
    printf("\n");
}

void heap_sort() {
    build_heap();
    int n = length;
    for(int i=n; i>=2; i--) {
        exchange(&A[1], &A[length]);
        length--;
        max_heapify(1);
    }
    length = n;
    print_array();
}

int main(void) {
    init();
    while(1)
    {
        int x;
        printf("Insert option:\n1. Print Heap 2. Print Array 3. Create new Heap \n\
4. Build Heap 5. Extract max 6. Insert\n7. Increase key 8. Heapsort\n");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            print_heap();
            break;
        case 2:
            print_array();
            break;
        case 3:
            printf("Insert number of items: ");
            int val;
            scanf("%d", &val);
            printf("Insert %d items: ", val);
            for(int i=1; i<=val; i++)
                 scanf("%d", &A[i]);
            length = val;
            build_heap();
        case 4:
            build_heap();
            break;
        case 5:
            val = extract_max();
            printf("%d Extracted from Priority Queue.\n", val);
            break;
        case 6:
            printf("Insert an item: ");
            scanf("%d", &val);
            insert(val);
            printf("%d inserted in Priority Queue.\n", val);
            break;
        case 7:
            printf("Index of item you want to increase key: ");
            scanf("%d", &val);
            int key;
            printf("New key: ");
            scanf("%d", &key);
            increase_key(val, key);
            printf("Index %d increased to %d.\n", val, key);
            break;
        case 8:
            printf("Sorted order: ");
            heap_sort();
            printf("Warning: After HeapSort heap property is not maintained.\
 You need to call BuildHeap again.\n");
            break;
        }
    }
    return 0;
}
