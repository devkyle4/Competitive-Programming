#include <iostream>
using namespace std;

int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long b_cost = 0;
    long long amount_needed = 0;

    for (int i = 1; i <= w; i++)
        b_cost += i * k;

    if (b_cost > n)
        amount_needed = b_cost - n;

    cout << amount_needed;

    return 0;
}