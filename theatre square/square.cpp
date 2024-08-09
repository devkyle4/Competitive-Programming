#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, a;

    cin >> n >> m >> a;

    long long m_a = (m + a - 1) / a;
    long long n_a = (n + a - 1) / a;

    cout << m_a*n_a;
    return 0;
}