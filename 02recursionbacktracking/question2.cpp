// Question 2:
// Print all unique subsets of the array {1, 2, 2} using recursion and backtracking.
// Note: Since we have duplicates, we need to avoid generating duplicate subsets.
// Example output:
// (empty set)
// 1
// 2
// 1 2
// 2 2
// 1 2 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to print all unique subsets
void printUniqueSubsets(vector<int> &arr, vector<int> &subset, int index)
{
    // Base case: when we've processed all elements
    if (index == arr.size())
    {
        // Print the current subset
        for (int num : subset)
            cout << num << " ";
        cout << endl;
        return;
    }

    // Include the current element
    subset.push_back(arr[index]);
    printUniqueSubsets(arr, subset, index + 1);
    subset.pop_back(); // Backtrack

    // Skip duplicates to avoid generating duplicate subsets
    while (index + 1 < arr.size() && arr[index] == arr[index + 1])
    {
        index++;
    }

    // Exclude the current element (and all its duplicates)
    printUniqueSubsets(arr, subset, index + 1);
}

int main()
{
    vector<int> arr = {1, 2, 2}; // Array with duplicates

    // Sort the array first (important for duplicate handling)
    sort(arr.begin(), arr.end());

    cout << "All unique subsets of {1, 2, 2}:" << endl;
    cout << "=================================" << endl;

    vector<int> subset;
    printUniqueSubsets(arr, subset, 0);

    return 0;
}