#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n), b(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        auto twist_corners = [&](int i, int j)
        {
            int difference = (b[i][j] - a[i][j] + 3) % 3;

            if (difference == 0)
                return;
            else if (difference == 1)
            {
                a[i][j] = (a[i][j] - '0' + 1) % 3 + '0';
                a[i + 1][j + 1] = (a[i + 1][j + 1] - '0' + 1) % 3 + '0';
                a[i][j + 1] = (a[i][j + 1] - '0' + 2) % 3 + '0';
                a[i + 1][j] = (a[i + 1][j] - '0' + 2) % 3 + '0';
            }
            else
            {
                a[i][j] = (a[i][j] - '0' + 2) % 3 + '0';
                a[i + 1][j + 1] = (a[i + 1][j + 1] - '0' + 2) % 3 + '0';
                a[i][j + 1] = (a[i][j + 1] - '0' + 1) % 3 + '0';
                a[i + 1][j] = (a[i + 1][j] - '0' + 1) % 3 + '0';
            }
        };

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                twist_corners(i, j);
            }
        }

        cout << (a == b ? "YES\n" : "NO\n");
    }
}



