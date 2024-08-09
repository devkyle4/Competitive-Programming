#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> x(3);

        for (int i = 0; i < x.size(); i++)
            cin >> x[i];

        int f_a = 1e9;
        for (int i = 1; i <= 10; i++)
            f_a = min(f_a, abs(i - x[0]) + abs(i - x[1]) + abs(i - x[2]));

        cout << f_a << endl;
    }

    return 0;
}