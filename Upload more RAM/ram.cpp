#include <iostream>
using namespace std;

int main()
{
    int t;
    int gb, k;
    int min;
    cin >> t;
    while (t--)
    {
        cin >> gb >> k;

        min = (gb * k) - (k - 1);

        cout << min << endl;
    }
    return 0;
}