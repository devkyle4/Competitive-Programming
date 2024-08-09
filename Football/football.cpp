#include <bits/stdc++.h>

using namespace std;

int main()
{
    string code;
    int limit = 1;

    cin >> code;

    for (int i = 1; i <= code.length(); i++)
    {
        if (code[i] == code[i - 1])
        {
            limit++;
            if (limit == 7)
            {
                cout << "YES";
                exit(0);
            }
        }
        else
        {
            limit = 1;
        }
    }
    cout << "NO";
    return 0;
}