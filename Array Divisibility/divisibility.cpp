#include <iostream>
#include <vector>

using namespace std;
void printBeautifulArray(int n)
{
    vector<int> array(n);
    for (int i = 1; i <= n; i++)
    {
        array[i - 1] = i * n;
    }

    for (int num : array)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printBeautifulArray(n);
    }
    return 0;
}
