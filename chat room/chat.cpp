#include <bits/stdc++.h>

using namespace std;

int main()
{
    string target = "hello";
    int k = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (target[k] == s[i])
            k++;
            
    }if(k==target.length()){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}