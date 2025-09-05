#include<iostream>
#include<limits.h>
using namespace std;
int main (){

    // Maximum subarray sum in the given array 

    int arr[]={-2,-3,4,-1,-2,1,5,-3,10,-6,100};

    int size = sizeof(arr)/sizeof(arr[0]);

    int best_value = INT32_MIN;
    int currentSum = 0;

    for (int i=0; i<size; i++){
        currentSum = currentSum + arr[i];

        if (currentSum > best_value){
            best_value = currentSum;
        }

        if (currentSum < 0){
            currentSum = 0;
        }
    }
    cout << best_value;


}

