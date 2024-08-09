
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        vector<long long> v1, v2;

        do
        {
            v1.push_back(x % 2);
            x /= 2;
        } while (x);

        do
        {
            v2.push_back(y % 2);
            y /= 2;
        } while (y);

        while (v1.size() < v2.size())
            v1.push_back(0);
        while (v2.size() < v1.size())
            v2.push_back(0);

        long long res = 1;

        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == v2[i])
            {
                res = (long long)res * 2;
            }else{
                break;
            }
        }

        cout << res << endl;
    }


    return 0;
}