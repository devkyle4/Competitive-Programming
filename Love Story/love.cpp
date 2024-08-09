#include <iostream>
using namespace std;

int main()
{
    string codeforces = "codeforces";
    string input;
    int t;

    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> input;
        for (int i = 0; i < codeforces.length(); i++)
        {
            if (tolower(codeforces[i]) != tolower(input[i]))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}