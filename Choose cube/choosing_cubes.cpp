#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    int f, n, k;

    cin >> t;
    while (t--)
    {
        int count = 0, before = 0;
        cin >> n >> f >> k;
        vector<int> cubes(n);

        for (int i = 0; i < cubes.size(); i++)
            cin >> cubes[i];

        f = cubes[f - 1];
        sort(cubes.begin(), cubes.end());
        reverse(cubes.begin(), cubes.end());
        cubes.resize(n);

        for (int j = 0; j < cubes.size(); j++)
        {
            if (cubes[j] > f)
            {
                before++;
            }
            else if (cubes[j] == f)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        if (k <= before)
        {
            cout << "NO\n";
        }
        else if (k >= (count + before))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "MAYBE\n";
        }
    }
    return 0;
}