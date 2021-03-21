#include<stdio.h>
int find_one(int arr[], int L , int H){

int n= H - L + 1;

if(arr[H]==0){
    return 0;
}
else if(arr[L]==1){
    return n;
}
else{
       int mid=(L+H)/2;
       return (find_one(arr, L, mid)+ find_one(arr, mid+1, H));
}

}
int main(){
    int array[10]={0,0,0,0,1,1,1,1,1,1};
    int a=find_one(array,0,9);
    printf("%d , 1 is present",a);
    return 0;
}