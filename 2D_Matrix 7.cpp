#include<iostream>
using namespace std;
int main (){

    // minimum & maximum element in the given 2d Array

    int arr[3][3];
    int max = 0;
    int min = INT32_MAX;

    // taking input into the matrix

    cout << "enter the array elements" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cin >> arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            if(arr[i][j] > max) {

                max = arr[i][j];
            }

            if(arr[i][j] < min){

                min = arr[i][j];
            }
        }
    }

    cout << "maximum element in 2d matrix is -: " << max << endl;
    cout << "minimum element in 2d matrix is -: " << min << endl;

} 