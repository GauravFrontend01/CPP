// Question 4:
// Print the nth Fibonacci number using recursion. For example, fibonacci(5) = 5 (sequence: 0, 1, 1, 2, 3, 5).

#include <iostream>
using namespace std;

// Recursive fibonacci function
int fibonacci(int n)
{
    // Base cases: fibonacci(0) = 0, fibonacci(1) = 1
    if (n == 0 || n == 1)
    {
        return n;
    }
    // Recursive case: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 5; // You can change this value to test with other numbers
    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;
    return 0;
}