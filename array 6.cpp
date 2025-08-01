#include<iostream>
using namespace std;
int main (){
    system("cls");
    
    // Find the sum of all elements in a given array .

    int arr[] = {5,10,15,20,25};
    int size = sizeof(arr)/sizeof(arr[0]);
   

    int sum = 0 ;

    for (int i=0 ;i<size ; i++){
        sum = sum+(arr[i]);
        
    }
    cout << sum ;

     

}