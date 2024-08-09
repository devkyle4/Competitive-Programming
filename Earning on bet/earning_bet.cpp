#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// 7, 3, 5
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> k(n);
        vector<int> bet(n);

        for (int i = 0; i < n; i++)
            cin >> k[i];

        int x = k[0];
        for (int i = 1; i < n; i++)
            x = lcm(x, k[i]);

        for (int i = 0; i < n; i++)
            bet[i] = x / k[i];

        if (accumulate(bet.begin(), bet.end(), 0ll) >= x)
        {
            cout << "-1" << endl;
            continue;
        }

        for (auto i : bet)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}