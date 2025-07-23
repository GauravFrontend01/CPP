// Question 1:
// Print numbers from n to 1 using recursion. For example, if n = 4, output should be 4321.

#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNumbers(n - 1);
};

int main()
{
    int n = 4;
    printNumbers(n);
    cout << endl;
    return 0;
}