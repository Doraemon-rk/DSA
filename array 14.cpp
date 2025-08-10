 #include<iostream>
using namespace std;

void shiftArray(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1; i>=1; i++){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i =0; i<n; i++){

        cout << arr[i] << " ";
    }

}
int main(){

    int num1[] = {2,10,5,2,1,3,3};
    int size = sizeof(num1)/sizeof(num1[0]);

    shiftArray(num1,size);


}