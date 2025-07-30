#include <iostream>
using namespace std;

int counttwo(int arr[], int size)
{

cout << "the indixes are "<< endl;    
for (int i=0 ; i<size ; i++){

    if (arr[i] == 2){
        cout << i << endl;
    }
    
}
}

int main(){
system("cls");

int arr[] = {10,20,30,40,50,2,60,70,80,90};
int size = sizeof(arr)/sizeof(arr[0]);
//cout << size << endl;

// function calling 

counttwo(arr , size);

}