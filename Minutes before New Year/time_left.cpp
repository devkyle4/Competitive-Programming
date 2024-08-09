#include <iostream>
using namespace std;

int main()
{
    int hh, mm;
    int t;

    cin >> t;
    while (t--)
    {
        cin >> hh >> mm;
        int hours_left = 23 - hh;
        int minutes_left = 60 - mm;

        if (hours_left != 0)
        {
            hours_left *= 60;
        }

        cout << hours_left + minutes_left << endl;
    }

    return 0;
}