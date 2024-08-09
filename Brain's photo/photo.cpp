#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    int size = n * m;

    vector<string> colors(size);

    for (int i = 0; i < colors.size(); i++)
    {
        cin >> colors[i];
    }

    int color = 0;
    for (auto &i : colors)
    {
        if (i == "C" || i == "M" || i == "Y")
        {
            color++;
        }
    }

    if (color > 0)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }

    return 0;
}