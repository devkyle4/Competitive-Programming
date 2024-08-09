#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string scores;

    cin >> n;
    cin >> scores;

    int anton = 0, danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] == 'A')
            anton++;
        else
            danik++;
    }

    string winner = "";
    if (anton > danik)
        winner = "Anton";
    else if (anton < danik)
        winner = "Danik";
    else
        winner = "Friendship";

    cout << winner;

    return 0;
}