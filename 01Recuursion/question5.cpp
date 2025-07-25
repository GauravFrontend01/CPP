// Question 5:
// Check if an array is sorted in ascending order using recursion.
// For example, arr = {1, 2, 3, 4, 5} should return true; arr = {1, 3, 2, 4, 5} should return false.

#include <iostream>
using namespace std;

// TODO: Write your recursive function here
bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    };

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
};

int main()
{
    int arr[] = {1, 2, 3, 6, 5}; // You can change this array to test
    int n = sizeof(arr) / sizeof(arr[0]);
    bool result = isSorted(arr, n);
    if (result)
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}