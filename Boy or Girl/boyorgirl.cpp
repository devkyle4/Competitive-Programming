#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string username;
    vector<char> charList = {};
    getline(cin, username);

    for (char c : username)
    {
        c = tolower(c);
        if (find(charList.begin(), charList.end(), c) == charList.end())
            charList.push_back(c);
    }

    if(charList.size()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

            return 0;
}