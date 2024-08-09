#include <iostream>
using namespace std;

int main()
{
    string input;
    int length=0;
    int count = 0;

    cin >> length;
    cin >> input;

    for (int i = 0; i < length; i++)
    {
        if (input[i] == input[i+1])
            count++;
    }
    cout << count;
    return 0;
}