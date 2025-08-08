#include<iostream>
using namespace std;

// finding unique element in an array

int getUnique(int arr[], int size){

    int ans = 0;

    for(int i=0; i<size; i++){

        ans = ans^arr[i];
    }

    return ans;
}


int main(){
    int arr[] = {2,1,5,5,2,1,3,3,4}; // 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = getUnique(arr, n);

      cout << "the unique element in the given array is " << result << endl;
} 