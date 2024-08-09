#include <iostream>

using namespace std;

int main()
{
    int n, rem;
    cin >> n;
    string words[n];
    char firstLetter, lastLetter;

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() > 10)
        {
            firstLetter = words[i][0];
            lastLetter = words[i][words[i].length() - 1];
            rem = words[i].length() - 2;

            cout << firstLetter << rem << lastLetter << endl;
        }
        else{
            cout << words[i]<<endl;
        }
    }

    return 0;
}