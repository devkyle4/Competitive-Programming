#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];

            if (j == n - 1 && sum == 0)
                count++;
        }
        
    }

    if (count == 3)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}