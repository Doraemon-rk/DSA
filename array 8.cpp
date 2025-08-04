#include<iostream>
using namespace std;

    // Find the maximum element in the array .

    int maximuminarray(int arr[], int size){
        int max = INT32_MIN;
      for (int i=0 ; i<size ; i++){
        if (arr[i] > max){
            max=arr[i];
        }
      }
      return max;
    }

    int main (){

        int nums[]={9,2,7,-30,14,3,1,-22};
        int n = sizeof(nums)/sizeof(nums[0]);

        cout << maximuminarray(nums,n);
    }



