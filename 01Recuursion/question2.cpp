// Question 2:
// Calculate factorial of a number using recursion. For example, factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120.

#include <iostream>
using namespace std;

// Recursive factorial function
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
};

int main()
{
    int n = 5; // You can change this value to test with other numbers
    int result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}