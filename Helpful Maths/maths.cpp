#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string count1 = "", count2 = "", count3 = "";
    string str;

    cin >> str;

    for (char ch : str)
    {
        if (ch == '1')
            count1 += "1+";
        if (ch == '2')
            count2 += "2+";
        if (ch == '3')
            count3 += "3+";
    }

    string result = count1 + count2 + count3;

    if (!result.empty())
        result.pop_back();
    cout << result;

    return 0;
}