 #include<iostream>
 using namespace std;
 int main (){
    system("cls");

    // count the number of even and odd elements in an array .

    int arr[] = {2,3,4,5,6,7,8,9,1,10};
    int size = sizeof(arr)/sizeof(arr[0]);
   
    int evencount = 0 , oddcount = 0;
    for (int i=0 ; i<size ; i++){
        if (arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }


    }
   cout << evencount << " " <<endl;
   cout << oddcount << " " << endl;

 }