#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long long> a(n - 1);

        for (int i = 0; i < n - 1; i++)
            cin >> a[i];

        vector<long long> b;
        b.push_back(a[n - 2]);
        b.push_back(1e9);

        for (int i = n - 3; i >= 0; i--)
        {
            b.push_back(b.back() - a[i]);
        }

        reverse(b.begin(), b.end());
        for (int i : b)
        {
            cout << i << " ";
        }
    }

    return 0;
}