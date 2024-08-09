#include <iostream>

using namespace std;

int main()
{
    string word;
    int lower = 0;
    int upper = 0;

    cin >> word;
    for (char &c : word)
    {
        if (c == tolower(c))
            lower++;
        else
            upper++;
    }

    string new_word = "";
    if (lower >= upper)
    {
        for (char &c : word)
        {
            new_word += tolower(c);
        }
    }
    else
    {
        for (char &c : word)
        {
            new_word += toupper(c);
        }
        }
    cout << new_word;

    return 0;
}