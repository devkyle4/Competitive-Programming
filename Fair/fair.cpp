#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> scores(4);
    int win1, win2;
    int t;

    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> scores[i];
        }

        win1 = max(scores[0], scores[1]);
        win2 = max(scores[2], scores[3]);

        int fair = 0, unfair = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            if (scores[i] == win1 || scores[i] == win2)
                continue;
            else if (scores[i] > win1 || scores[i] > win2)
            {
                unfair++;
            }
        }

        if (unfair > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}