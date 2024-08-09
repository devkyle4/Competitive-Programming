#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    vector<char> vowel = {'A', 'O', 'Y', 'I', 'E', 'U'};

    string result = "";
    for (char &c : input)
    {
        string word = "";

        auto it = find(vowel.begin(), vowel.end(), toupper(c));
        if (it == vowel.end())
        {
            word.append(1, '.');
            word.append(1, tolower(c));

            result += word;
        }
    }

    for (auto c : result)
        cout << c;

    return 0;
}