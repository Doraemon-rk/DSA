 #include <iostream>
using namespace std;

int main()
{

    int largest_even = 0;
    int arr[] = {8, 10, 9, 7, 4, 12, 2,19,24,39}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > largest_even)
            {
                largest_even = arr[i];
            }
        }
    }
    cout << "largest even number  " << largest_even << endl;
} 