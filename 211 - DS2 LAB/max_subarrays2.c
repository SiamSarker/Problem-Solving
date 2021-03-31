#include <stdio.h>

struct result {
    int start;
    int end;
    int sum;
};

struct result max_crossing_subarray(int A[], int low, int mid, int high) {
    // write your code here
 int sum=0;
 int max_left;
 int max_right=0;

int left_sum =-2133094324874;
   for (int i = mid; i >= low; i--) {
            sum = sum + A[i];
            if (sum > left_sum)
                left_sum = sum;
                max_left =i ;
        }

sum = 0;
int right_sum = -2133094324874;


for (int j = mid + 1; j <= high; j++) {
            sum = sum + A[j];
            if (sum > right_sum)
                right_sum = sum;
                max_right =j ;
        }
        int summ=left_sum + right_sum;

         struct result X = {max_left, max_right,summ};


}

struct result max_subarray(int A[], int low, int high) {
    if(low == high) {
        struct result X = {low, high, A[low]};
        return X;
    }
    else {
        // write your code here
         int mid=(low+high)/2;
         struct result left=max_subarray(A,low,mid);
         struct result right=max_subarray(A,mid+1,high);
         struct result cross=max_crossing_subarray(A,low,mid,high);


         if(left.sum >= right.sum && left.sum>=cross.sum){
                struct result X = {low, mid, left.sum};
                    return X;

         }
         else if(right.sum>=left.sum && right.sum>=cross.sum){
               struct result X = {mid+1, high, right.sum};
                    return X;
         }
         else{
                struct result X = {low, high, cross.sum};
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
