#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int partition(int A[], int p, int r)
{
    int x = A[r];
    int i = p-1;
    for (int j =p; j <= r-1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            int temp;
            swap(A[i], A[j]); 
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quick_sort(int A[], int p, int r)
{
    if(p < r)
    {
        int q = partition(A, p, r);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }
}


int kth_largest(int A[], int p, int r, int k)
{
    int q = partition(A, p, r);
    if (q == k)
    {
        return A[k];
    }
    else if( q > k)
    {
        return kth_largest(A, p, q-1, k);
    }
    else
    {
        return kth_largest(A, q+1, r, k);
    }
}


int main()
{

    int A[8] = { 3, 7, 2, 13, 5, 4, 21, 15};

    cout << kth_largest(A, 0, 7, 3) << endl;

    return 0;
}