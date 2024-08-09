#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    string result = "";

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            count++;
            result += "2 ";
        }
    }
    else
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            count++;
            result += "2 ";
        }
        result += "3 ";
        count++;
    }

    cout << count << endl;
    cout << result;
    
    return 0;
}
