 #include <iostream>
using namespace std;

int main()
{

    //sum of column wise in 2d array/matrix

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

    //coloumn-wise sum ka logic
    cout << "column wise sum" << endl;
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of column" << j << " " << sum << endl;
    }
} 