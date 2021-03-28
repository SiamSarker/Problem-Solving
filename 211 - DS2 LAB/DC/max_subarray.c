#include <stdio.h>

struct result {
    int start;
    int end;
    int sum;
};

struct result max_crossing_subarray(int A[], int low, int mid, int high) {
    // write your code here
}

struct result max_subarray(int A[], int low, int high) {
    if(low == high) {
        struct result X = {low, high, A[low]};
        return X;
    }
    else {
        // write your code here
    }
}

int main() {
    int arr[] = {1, -4, 3, 4, -2, 6, -2};
    struct result X = max_subarray(arr, 0, 6);
    printf("Max sum subarray %d to %d. Sum = %d.\n", X.start, X.end, X.sum);
    return 0;
}
