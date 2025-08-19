 #include <iostream>
using namespace std;

int main()
{

    // sum of row wise in 2d array/matrix

    int arr[4][4];

    // taking input in an 2d array

    cout << "enter the array elements" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }

    // row-wise sum ka logic
    for(int i=0; i<4; i++){

        int sum=0;

        for(int j=0; j<4; j++){

           sum = sum + arr[i][j];
        }

        cout << "sum of row -: "<< i << " " << sum << endl;
    }

   
} 