#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {

        if (left == right)
        {
            cout << arr[right] << endl;
        }

        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << endl;
        }

        left++;
        right--;
    }
}

int main(){


    int nums[] = {1, 3, 14, 11, 7, 2, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

     extremePrint(nums, size);
}