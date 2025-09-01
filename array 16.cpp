#include<iostream>
using namespace std;
int main (){

    // second largest number

    int arr[9];
    int largest_number = 0;

    cout << "enter the element "<<endl;
    for (int i=0; i<9; i++){
        
            cin >> arr[i];
        

    }

    for (int i=0; i<9; i++){
        
            if (arr[i]>largest_number){
                largest_number = arr[i];
            }
        
        
    }
    cout << "second largest number is = "<<largest_number-1 <<" ";
    

}