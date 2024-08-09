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
        long long n, k;
        cin >> n >> k;

        vector<long long> a(k);

        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end(), greater<int>());

        int total = 0;
        for (int i = 1; i < k; i++)
            total += (2 * a[i] - 1);

        cout << total << endl;
    }

    return 0;
}