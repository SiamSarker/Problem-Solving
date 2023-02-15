#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {2};

     int flag = 5;

    if(arr.size() < 3 ) return false;

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]) return false;
        if(arr[i] < arr[i+1]) {
            if(flag == 1) return false;
            flag = 0;
            continue;
        }
        if(arr[i] > arr[i+1]) {
            if(flag > 1) return false;
            flag = 1;
            continue;
        }
    }
        
    if(flag == 1) return true;
    else return false;
    
}