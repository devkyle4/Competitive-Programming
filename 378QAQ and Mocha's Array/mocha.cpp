#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<long long> a(n);
        vector<long long> b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 1; i < n; i++)
        {
            if (a[i] % a[0] != 0)
                b.push_back(a[i]);
        }

        bool yes = true;
        if (b.size())
        {
            for (auto i : b)
            {
                if (i % b[0] != 0)
                    yes = false;
            }
        }

        if (yes)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}