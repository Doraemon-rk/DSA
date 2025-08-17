#include<iostream>
using namespace std;
int main (){
    system("CLS");
    // Sum of All Element in the 2D Matrix .


    int arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    int sum =0;

    for (int i=0 ;i<2 ; i++){

        for (int j=0 ; j<5 ; j++){

            sum = sum+arr[i][j];
        }
    }
    cout <<"the sum of all element of the given matrix is :- "<<sum <<endl;
}