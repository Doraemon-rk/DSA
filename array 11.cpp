#include<iostream>
#include<algorithm>
using namespace std;

void Reverse_in_array(int num[],int n){
    int left=0;
    int right=n-1;

    while(left <= right){
    swap(num[left], num[right] );
    left++;
    right--;
    }
    for (int i=0 ; i<n ; i++){
        cout << num[i]<<" ";
    }
}