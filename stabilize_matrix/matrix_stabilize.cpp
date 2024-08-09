#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;

    while (t--)
    {
        cin >> n >> m;
        int a[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int mx = 0;

                if (i > 0)
                    mx = max(mx, a[i - 1][j]);
                if (i < n - 1)
                    mx = max(mx, a[i + 1][j]);
                if (j > 0)
                    mx = max(mx, a[i][j - 1]);
                if (j < m - 1)
                    mx = max(mx, a[i][j + 1]);

                if (a[i][j] > mx)
                    a[i][j] = mx;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}