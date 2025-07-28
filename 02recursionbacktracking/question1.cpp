// Question 1:
// Print all subsets of the array {1, 2, 3} using recursion and backtracking.
// Example output:
// (empty set)
// 1
// 2
// 3
// 1 2
// 1 3
// 2 3
// 1 2 3

#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print all subsets
void printSubsets(vector<int> &arr, vector<int> &subset, int index)
{
    if (index == arr.size())
    {
        if (index == arr.size())
        {
            for (int num : subset)
                cout << num << " ";
            cout << endl;
            return;
        }
    }

    subset.push_back(arr[index]);
    printSubsets(arr, subset, index + 1);
    subset.pop_back();
    printSubsets(arr, subset, index + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> subset;
    printSubsets(arr, subset, 0);
    return 0;
}