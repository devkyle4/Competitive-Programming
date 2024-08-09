#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<long long> a(n), b(n - 1);

        for (int i = 0; i < b.size(); i++)
        {
            cin >> b[i];
        }

        for (int j = 1; j < 10; j++)
        {
            int z = j;
            for (int k = z + 1; k < 10; k++)
            {
                int d = k;
                for (int i = 0; i < n; i++)
                {
                    if ((j & d) == b[i])
                    {
                        a.at(i) = j;
                        a.at(i + 1) = d;
                    }
                }
            }
        }

     for (auto i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}