#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }

        long long count = 0;
        long long PrefixMax = -1;
        long long prefixSum = 0;

        for (int i = 0; i < n; i++)
        {
            PrefixMax = max(PrefixMax, a[i]);
            prefixSum += a[i];
            if (prefixSum - PrefixMax == PrefixMax)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}