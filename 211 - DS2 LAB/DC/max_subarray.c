#include <stdio.h>
#include <math.h>

struct result {
    int start;
    int end;
    int sum;
};

struct result max_crossing_subarray(int A[], int low, int mid, int high) {
    // write your code here
    int left_sum = -INFINITY;
    int right_sum = -INFINITY;
    int sum = 0;
    int max_left;
    int max_right;

    for(int i = mid; i >= low; i--){
        sum = sum + A[i];
        if(sum > left_sum){
            left_sum = sum;
            max_left = i;
        }
    }

    sum = 0;

    for(int i = mid + 1; i <= high; i++){
        sum = sum + A[i];
        if(sum > right_sum){
            right_sum = sum;
            max_right = i;
        }
    }

    struct result X = {max_left, max_right, left_sum + right_sum};
    return X;
}

struct result max_subarray(int A[], int low, int high) {
    if(low == high) {
        struct result X = {low, high, A[low]};
        return X;
    }
    else {
        // write your code here

        int mid = (low + high)/2;
       struct result left_subArr = max_subarray(A, low, mid);
        struct result right_subArr = max_subarray(A, mid + 1, high);
        struct result cross_subArr = max_crossing_subarray(A, low, mid, high);

        if((left_subArr.sum >= right_subArr.sum) && (left_subArr.sum >= cross_subArr.sum)){
            struct result X = {left_subArr.start, left_subArr.end, left_subArr.sum};
            return X;
        }
        else if((right_subArr.sum >= left_subArr.sum) && (right_subArr.sum >= cross_subArr.sum)){
            struct result X = {right_subArr.start, right_subArr.end, right_subArr.sum};
            return X;
        }
        else{
            struct result X = {cross_subArr.start, cross_subArr.end, cross_subArr.sum};
            return X;
        }
    }
}

int main() {
    int arr[] = {1, -4, 3, 4, -2, 6, -2};
    struct result X = max_subarray(arr, 0, 6);
    printf("Max sum subarray %d to %d. Sum = %d.\n", X.start, X.end, X.sum);
    return 0;
}