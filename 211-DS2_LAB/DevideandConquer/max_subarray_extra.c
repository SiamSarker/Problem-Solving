#include <stdio.h>
#include<math.h>
struct result {
    int start;
    int end;
    int sum;
};

struct result max_crossing_subarray(int A[], int low, int mid, int high) {
    // write your code here
 int sum=0;
 int max_left;
 int max_right;

int left_sum =-INFINITY;
   for (int i = mid; i >= low; i--) {
            sum = sum + A[i];
            if (sum > left_sum){
                left_sum = sum;
                max_left =i ;
            }
        }
int right_sum = -INFINITY;
sum = 0;


for (int j = mid + 1; j <= high; j++) {
            sum = sum + A[j];
            if (sum > right_sum){
                right_sum = sum;
                max_right = j ;
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
         int mid=(low+high)/2;
         struct result left=max_subarray(A,low,mid);
         struct result right=max_subarray(A,mid+1,high);
         struct result cross=max_crossing_subarray(A,low,mid,high);


         if((left.sum >= right.sum )&&(left.sum>=cross.sum)){
                struct result X = {left.start,left.end, left.sum};
                return X;

         }
         else if((right.sum>=left.sum) && (right.sum>=cross.sum)){
               struct result X = {right.start,right.end, right.sum};
                    return X;
         }
         else{
                struct result X = {cross.start,cross.end, cross.sum};
                    return X;
             }
         }


    }


int main() {
    int arr[] = {100, 113,110,85,105,102,86,63,81,101,94,106,101,79,94,90,97};
    int change[100];
    change[0]= -37574567;
    for(int i=1;i<17;i++){
        change[i] = arr[i]-arr[i-1];
    }
    // for(int i=0;i<=17;i++){
    //     printf("%d %d\n",i,change[i]);
    // }
    struct result X = max_subarray(change, 0, 17);
    printf("Max sum subarray %d to %d. Sum = %d.\n", X.start-1, X.end, X.sum);
    return 0;
}
