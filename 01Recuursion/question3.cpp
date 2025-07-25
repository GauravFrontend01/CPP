// Question 3:
// Calculate the sum of first n natural numbers using recursion. For example, sum of 5 = 5 + 4 + 3 + 2 + 1 = 15.

#include <iostream>
using namespace std;

// TODO: Write your recursive sum function here
int sumOfN(int n)
{
    if (n == 1)
    {
        return 1;
        /* code */
    };

    return n + sumOfN(n - 1);
};

int main()
{
    int n = 5; // You can change this value to test with other numbers
    int result = sumOfN(n);
    cout << "Sum of first " << n << " numbers is: " << result << endl;
    return 0;
}