#include<iostream>
using namespace std;
int main (){

     int arr[] = {1, 0, 0, 1, 1, 1, 0, 0, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
     int result[] = {100}; 
    int variable1 = 0, variable2 = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0)
            variable1++;
        else
            variable2++;
    }


    int i = 0;
    while(variable1 != 0) {
        result[i] = 0;
        variable1--;
        i++;
    }

    int j = i;

    while(variable2 != 0) {
        result[j] = 1;
        variable2--;
        j++;
    }
    cout << "Segregated array: ";
     for(int i = 0; i < size; i++)
        cout << result[i] << " ";

}