#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;

        while (n > 1)
        {

            if (n > 2)
            {
                n = n - 4;
                count++;
            }
            else
            {
                count++;
                n = n - 2;
            }
        }

        cout << count << endl;
    }
    return 0;
}