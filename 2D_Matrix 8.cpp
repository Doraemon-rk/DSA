 #include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {8,10,9,7,4,12,2,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = INT32_MIN;

   for(int i=0; i<size; i++){

        if(arr[i] > min){

            min = arr[i];
        }
   }

   cout << "the largets number in the given array is -: " << min << endl;
} 