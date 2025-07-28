// Question 3:
// Print all permutations of the array {1, 2} using recursion and backtracking.
// A permutation is a rearrangement of all elements.
// Example output:
// 1 2
// 2 1

#include <iostream>
#include <vector>
using namespace std;

// Helper function to print array with brackets
void printArray(vector<int> &arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }
    cout << "]";
}

// Recursive function to print all permutations with detailed logging
void printPermutations(vector<int> &arr, int index, int depth = 0)
{
    // Create indentation for better visualization
    string indent = "";
    for (int i = 0; i < depth; i++)
    {
        indent += "  ";
    }

    cout << indent << "-> Entering function: index=" << index << ", depth=" << depth << endl;
    cout << indent << "   Current array: ";
    printArray(arr);
    cout << endl;

    // Base case: when we've placed all elements
    if (index == arr.size())
    {
        cout << indent << "-> BASE CASE: Printing permutation: ";
        for (int num : arr)
            cout << num << " ";
        cout << endl;
        return;
    }

    cout << indent << "   Need to place element at position " << index << endl;
    cout << indent << "   Available elements from index " << index << " to " << arr.size() - 1 << endl;

    // Try placing each element at the current position
    for (int i = index; i < arr.size(); i++)
    {
        cout << indent << "   -> Trying to place element " << arr[i] << " at position " << index << endl;
        cout << indent << "      Before swap: ";
        printArray(arr);
        cout << endl;

        // Swap current element with element at index i
        swap(arr[index], arr[i]);

        cout << indent << "      After swap:  ";
        printArray(arr);
        cout << " (swapped positions " << index << " and " << i << ")" << endl;

        // Recursively generate permutations for remaining positions
        cout << indent << "      -> Recursive call: index=" << index + 1 << ", depth=" << depth + 1 << endl;
        printPermutations(arr, index + 1, depth + 1);
        cout << indent << "      <- Back from recursive call" << endl;

        // Backtrack: swap back to restore original order
        swap(arr[index], arr[i]);

        cout << indent << "      After backtrack: ";
        printArray(arr);
        cout << " (swapped back positions " << index << " and " << i << ")" << endl;
        cout << indent << "   <- Finished trying element " << arr[i] << " at position " << index << endl;
    }

    cout << indent << "<- Exiting function: index=" << index << ", depth=" << depth << endl;
}

int main()
{
    vector<int> arr = {1, 2}; // Changed to smaller array

    cout << "All permutations of {1, 2} with detailed backtracking flow:" << endl;
    cout << "=========================================================" << endl;
    cout << "Initial array: ";
    printArray(arr);
    cout << endl
         << endl;

    printPermutations(arr, 0);

    cout << endl
         << "Final array: ";
    printArray(arr);
    cout << endl;

    return 0;
}