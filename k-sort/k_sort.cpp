#include <iostream>
using namespace std;

int n;
bool isSortedNonDecreasing(int arr[], int size)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int sum = 0;
    int diff;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isSortedNonDecreasing(a, n))
        {
            sum = 0;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)

            {

                if (a[i] > a[i + 1])

                {
                    diff = a[i] - a[i + 1];
                    a[i + 1] = a[i + 1] + diff+1;
                    sum += diff;
                }
            }
            sum = sum + 1;
        }

        cout << sum;
        return 0;
    }
}