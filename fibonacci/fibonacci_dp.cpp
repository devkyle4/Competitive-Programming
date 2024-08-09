#include <iostream>
using namespace std;

int fib(int n, int memo[10])
{
    int result = 0;
    if (memo[n] != 0)
        return memo[n];
    if (n == 1 || n == 2)
        result = 1;
    else
        result = fib(n - 1, memo) + fib(n - 2, memo);
    memo[n] = result;

    return result;
}

int main()
{
    int memo[10] = {};
    int n;
    cout << "Enter the ith position position: ";
    cin >> n;
    cout << fib(n, memo) << endl;

    return 0;
}