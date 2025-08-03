#include<iostream>
using namespace std;
int main () {
    // Find the maximum element in the array .

    int nums[]={4,2,5,6,3,9,12,10};
    int size = sizeof(nums)/sizeof(nums[0]);
    int count=0;

    for (int i=0 ; i<size ; i++){
        if (count < nums[i]){
            count = nums[i];
        }
    }
    cout<< "Maximum Element " << count << endl ;


}