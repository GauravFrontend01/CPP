// Question 7:
// Print numbers from 1 to n using recursion. For example, if n = 4, output should be 1 2 3 4.

#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if (n == 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 4; // You can change this value to test
    printNumbers(n);
    cout << endl;
    return 0;
}