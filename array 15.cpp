 #include<iostream>
using namespace std;

int TwoSum(int arr[], int size){

   int target = 99;
   int count = 0;

   for(int i=0; i<size; i++){

     for(int j=i+1; j<size; j++){

         if(arr[i] + arr[j] == target){
            
            cout << "pair found " << arr[i] << " + " << arr[j] << " = " << target << endl;
            count++;
         }
     }
   }

   if(count==0){
    cout << "ohh noo, Pair not found" << endl;
   }
   return 0;
}


int main(){

int arr[] = {2,7,11,5,9,4,3,1};
int size = sizeof(arr)/sizeof(arr[0]);

TwoSum(arr,size);

} 