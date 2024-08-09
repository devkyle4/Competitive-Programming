#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, t;

    cin >> t;

    while (t--)
    {
        string s[1000];
        cin >> n >> k;

        for (int i = 0; i < n; i++)
            cin >> s[i];

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
                cout << s[i][j];

            cout << "\n";
        }
    }
    return 0;
}        
