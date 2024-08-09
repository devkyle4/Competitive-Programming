#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    bool lucky = false;
    int a[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

    for (int i = 0; i < 12; i++)
    {
        if (n % a[i] == 0)
        {
            lucky = true;
            break;
        }
    }
    if (lucky)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}