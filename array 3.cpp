#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 0, 2, 1, 2, 0, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
     int result[] = {100}; 
    int variable1 = 0, variable2 = 0, variable3 = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0)
            variable1++;
        else if(arr[i]==1 )
            variable2++;
            else if(arr[i]==2) 
            variable3++;

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
     int k = j;
    while(variable3 != 0) {
        result[k] = 2;
        variable3--;
        k++;
    }
    cout << "Segregated array: ";
    for(int i = 0; i < size; i++)
        cout << result[i]<<" ";

return 0;
}