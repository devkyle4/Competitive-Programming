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
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 1; i <= 5; i++)
        {
            if (a <= b && a <= c)
                a += 1;
            else if (b <= a && b <= c)
                b += 1;
            else
                c += 1;
        }
        cout << a * b * c << endl;
    }

    return 0;
}