#include<iostream>
using namespace std;
int mian (){

    // Finding number of even or odd number in 2D Array/Matrix

    int arr[3][3];
    int count_even=0;
    int count_odd=0;

    cout<< "enter the array element"<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3 ;j++){
            cin >> arr[i][j];
        
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3 ;j++){
            if(arr[i][j]%2==0){
              count_even++;
            }
            else{
                count_odd++;
            }
        }
    }
    cout << count_even <<" ";
    cout << count_odd <<" ";
     
    
}
}