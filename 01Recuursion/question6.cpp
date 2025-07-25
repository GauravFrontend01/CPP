// Question 6:
// Implement recursive binary search: Write a function binary(arr, target, starting, ending) that returns the index of target in a sorted array arr, or -1 if not found.
// Example: arr = {1, 3, 5, 7, 9}, target = 5 should return 2.

#include <iostream>
using namespace std;

// Recursive binary search function
int binary(int arr[], int target, int starting, int ending)
{
    if (starting > ending)
        return -1;
    int mid = starting + (ending - starting) / 2;
    if (arr[mid] == target)
    {
        return mid;
    };
    if (arr[mid] > target)
    {
        return binary(arr, target, starting, mid - 1);
    }
    else
    {
        return binary(arr, target, mid + 1, ending);
    };
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int index = binary(arr, target, 0, n - 1);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}