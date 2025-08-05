#include<iostream>
#include<limits.h>
using namespace std;
int main () {
    // Find the maximum element in the array 

    int nums[]={4,2,5,6,3,9,12,50,10};
    int size = sizeof(nums)/sizeof(nums[0]);
    int count=INT32_MIN;

    for (int i=0 ; i<size ; i++){
        if (count < nums[i]){
            count = nums[i];
        }
    }
    cout<< "Maximum Element " << count << endl ;


}
