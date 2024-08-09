#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void generateSubstring(string str, set<string> &substrings)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 1; i + j <= str.length(); j++)
        {
            substrings.insert(str.substr(i, j));
        }
    }
}

int main()
{
    int t;
    cin >> t;
    string str;

    while (t--)
    {
        set<string> substrings;
        cin >> str;
        generateSubstring(str, substrings);
        sort(substrings, substrings.length() - 1);

        cout << "\nSubstrings:\n";
        for (const string &substr : substrings)
        {
            cout << substr << ", ";
        }
    }

    return 0;
}