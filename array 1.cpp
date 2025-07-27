#include<iostream>
using namespace std;
int main (){
    
    // count no. of 2 in the given array

    int count = 0;

    int arr [] = {1,2,3,2,5,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0 ; i<n ; i++ ){
        if (arr[i]==2){
            count++;
        }
    }
    cout << "the no. of times the 2 occur in array element was -:"<< count <<endl;
}