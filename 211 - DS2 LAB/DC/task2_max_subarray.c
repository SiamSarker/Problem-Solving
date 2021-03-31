#include <stdio.h>
struct result {
    int start;
    int end;
    int sum;
};

struct result max_crossing_subarray(int A[], int low, int mid, int high) {
    // write your code here
    int max_left, max_right;
    int left_sum = -999999999;
    int total=0;
    
    for (int i = mid; i >= low; i--) {
        total += A[i];
        if (total > left_sum)
        {
            left_sum = total;
            max_left = i ;
        }
    }

    total = 0;
    int right_sum = -999999999;

    for (int i = mid + 1; i <= high; i++) {
        total += A[i];
        if (total > right_sum){
            right_sum = total;
            max_right = i ;
        }
    }
    
    return (struct result) {max_left, max_right,left_sum + right_sum};
    // return X;
}

struct result max_subarray(int A[], int low, int high) {
    if(low == high) {
        struct result X = {low, high, A[low]};
        return X;
    }
    else {
        // write your code here
         int mid=(low+high)/2;
         struct result left = max_subarray(A,low,mid);
         struct result right = max_subarray(A,mid+1,high);
         struct result cross = max_crossing_subarray(A,low,mid,high);
         
         if(left.sum >= right.sum && left.sum>=cross.sum)
                return (struct result) {left.start, left.end, left.sum};
         else if(right.sum>=left.sum && right.sum>=cross.sum)
               return (struct result) {right.start, right.end, right.sum};
         else return (struct result) {cross.start, cross.end, cross.sum};
         }
    }

int main() {
    int arr[] = {10, 11, 7, 10, 6};
    struct result X = max_subarray(arr, 0, 4);
    printf("Max sum subarray %d to %d. Sum = %d.\n", X.start, X.end, X.sum);
    return 0;
}
