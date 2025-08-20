#include<iostream>
using namespace std;
int main (){

// code for printing diagonal from left to right direction

int arr[4][4];

cout << "please enter the array elements" << endl;

for(int i=0; i<4; i++){

    for(int j=0; j<4; j++){

        cin >> arr[i][j];
    }
}
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){

        if(i==j){
            cout << arr[i][j] << " ";
        }
    }
}

} 
