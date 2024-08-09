#include <iostream>

using namespace std;

int main()
{

    int x1, y1, x2, y2;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        if (((y1 > x1) && (y2 > x2)) || ((y1 < x1) && (y2 < x2)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}