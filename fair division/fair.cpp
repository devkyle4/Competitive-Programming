#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;

    cin >> t;
    while (t--)
    {
        int count1 = 0;
        int count2 = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k == 1)
                count1++;
            else
                count2++;
        }

        int test = (count1 + (2 * count2)) % 2;

        if ((count1 + (2 * count2)) % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int sum = (count1 + 2 * count2) / 2;
            if (sum % 2 == 0 || (sum % 2 == 1 && count1 != 0))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}