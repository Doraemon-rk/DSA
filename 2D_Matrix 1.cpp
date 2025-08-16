#include<iostream>
using namespace std;
int main (){
    system("CLS");

    // This is how we take input in 2D matrix
    
    int arr[2][3];
    cout << "enter the 6 element "<< endl;

    for (int i=0; i<2 ; i++){

        for (int j=0 ; j<3 ; j++){

            cin >> arr[i][j];

        }
    }
     
    for (int i=0 ; i<2 ; i++){

        for (int j=0 ; j<3 ; j++){

            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
 
}