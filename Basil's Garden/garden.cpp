#include <iostream>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int heights[n];

        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        long long seconds = 0, last_height = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (heights[i] > last_height)
            {
                seconds += abs(heights[i] - last_height);
                last_height = heights[i];
            }
        }

        cout << seconds << endl;
        }
    return 0;
}