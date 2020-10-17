#include<stdio.h>

//factorial
int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num*fact(num-1);
}

int series_sum(int N, int i, int num1, int num2)
{
    if(i==N)
        return num1*num2;
    else
        return (num1*num2 + series_sum(N, i+1, num1+1, num2+2));
}

int arr_max(int *arr, int N, int maxx, int i)
{
    if(i==N-1)
    {
        maxx= maxx>arr[i] ? maxx:arr[i];
        return maxx;
    }
    else
    {
        maxx= maxx>arr[i] ? maxx:arr[i];
        return arr_max(arr, N, maxx, i+1);
    }

}

int arr_sum(int *arr, int row, int col, int i, int j)
{
    if( i==(row-1) && j==(col-1) )
    {
        return *(arr + i*col + j);
    }
    else
    {
        if(j<(col-1))
            return *(arr + i*col + j) + arr_sum(arr, row, col, i, j+1);
        else
            return *(arr + i*col + j) + arr_sum(arr, row, col, i+1, 0);
    }
}

void print_reverse_arr(int *arr, int N, int i)
{
    if(i==N-1)
    {
        printf("%d\n",arr[i]);
        return;
    }
    else
    {
        print_reverse_arr(arr, N, i+1);
        printf("%d\n",arr[i]);
        return;
    }
}

int fib(int N)
{
    if(N==1)
        return 0;
    else if(N==2)
        return 1;
    else
        return fib(N-1) + fib(N-2);
}

int find_element(int *arr, int N, int element, int low, int high)
{
    int index = (low+high)/2;
    if(arr[index] == element)
        return index;  //found
    else if(low >= high) // very important logic
        return -999; //not found
    else if(arr[index]<element)
        return find_element(arr, N, element, index+1, high);
    else if(arr[index]>element)
        return find_element(arr, N, element, low, index-1);

}

int main()
{
    //printf("factorial = %d\n", fact(5));


    // 1*3 + 2*5 + 3*7 + ...
    // printf("series sum = %d\n", series_sum(3, 1, 1, 3));


    // array max element determination
    
    /*int arr[] = {2,3,10,3,6};
    int arr_size = 5;
    printf("array max= %d\n", arr_max(arr, arr_size, arr[0], 1) );
    */


    //2D array sum
    /*
    int arr[3][4]=
    {
        {1,1,3,4},
        {0,1,0,1},
        {1,2,3,2},
    };
    int row=3, col=4;
    printf("array sum= %d\n", arr_sum(arr, row, col, 0, 0) );
    */


    //printing array in reverse. The method shown here is impossible to implement using for loop
    /*
    int arr[] = {2,3,10,3,6};
    print_reverse_arr(arr, 5, 0);
    */


    // Fibonacci series Nth term determine -> 0, 1, 1, 2, 3, 5, 8 ...
    //printf("%d\n", fib(5));


    //Binary search
    /*
    int arr[] = {0, 1, 4, 5, 6, 8, 12, 15, 55, 90};
    printf("%d\n", find_element(arr, 10, 16, 0, 9));
    printf("%d\n", find_element(arr, 10, 55, 0, 9));
    */

    return 0;
}