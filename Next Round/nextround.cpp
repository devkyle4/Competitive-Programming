#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k, k_count = 0;
    int n;
    int input;

    cin >> n >> k;

    vector<int> scores(n);

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    int target = scores[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (target <= scores[i])
            if (target == 0 & scores[i] == 0)
            {
            }
            else
            {
                k_count = k_count + 1;
            }
    }

    cout << k_count;

    return 0;
}