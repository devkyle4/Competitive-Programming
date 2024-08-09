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
        vector<int> diff_list;
        vector<int> x(3);
        int diff = 0;

        for (int i = 0; i < x.size(); i++)
        {
            cin >> x[i];
        }

        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0; j < x.size(); j++)
            {
                diff += abs(x[j] - x[i]);
            }
            diff_list.push_back(diff);
            diff = 0;
        }

        int f_a = *min_element(diff_list.begin(), diff_list.end());
        cout << f_a << endl;
    }

    return 0;
}