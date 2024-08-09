#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int x[n];

        for (int i = 0; i < n; i++)
            cin >> x[i];

        vector<int> k = {};
        for (int i = 0; i < n - 1; i++)
            k.push_back(max(x[i], x[i + 1]));

        cout << *min_element(k.begin(), k.end()) - 1 << endl;
    }

    return 0;
}
