#include<iostream>
#include<limits.h>
using namespace std ;
int main (){

    // Find the minimum element in the array 

    int nums[]={9,2,7,14,3,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    int min = INT32_MAX;

    for (int i=0 ; i<n ; i++){
        if (nums[i]<min){
            min=nums[i];
        }
    }
    cout <<"Minimum Element "<< min <<endl;

}