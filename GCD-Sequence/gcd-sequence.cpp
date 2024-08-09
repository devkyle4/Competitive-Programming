#include <iostream>

using namespace std;

const int N = 2e5 + 5;

int c[N], sequence[N], a[N];
int n;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool check(int x)
{
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == x)
            continue;
        c[++t] = a[i];
    }

    int last = 1;
    int y;
    for (int i = 1; i < n - 1; i++)
    {
        y = gcd(c[i], c[i + 1]);
    }
    if (y < last)
        return false;
    last = y;

    return true;
}

int main()
{

    int t;
    cin >> t;
    cin >> n;

    while (t--)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            sequence[i] = gcd(a[i], a[i + 1]);
        }

        int x = -1;

        for (int i = 0; i < n; i++)
        {
            if (sequence[i] > sequence[i + 1])
            {
                x = i;
                break;
            }
        }

        if (x == -1)
            cout << "YES\n";
        else if (check(x) || check(x + 1) || check(x + 2))
            cout << "YES\n";
        else
            cout << "NO\n";
        return 0;
    }
    
}