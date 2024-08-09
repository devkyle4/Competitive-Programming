#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    map<string, int> database;

    while (n--)
    {
        cin >> s;

        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}

