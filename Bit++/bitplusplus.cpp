#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> op_vector;
    string op_str;
    int count = 0;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> op_str;
        op_vector.push_back(op_str);
    }

    for (auto &i : op_vector)
    {
        if (i == "++X" || i == "X++")
            count += 1;
        else if (i == "--X" || i == "X--")
            count -= 1;
    }
    cout << count;

    return 0;
}