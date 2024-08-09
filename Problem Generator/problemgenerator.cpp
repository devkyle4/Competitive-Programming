#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int t;
    vector<int> results;
    cin >> t;

    while (t--)
    {
        // n = no of problems and m = number of rounds
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        map<char, int> characters;
        for (char ch = 'A'; ch <= 'G'; ch++)
        {
            characters[ch] = 0;
        }

        for (char ch : a)
        {
            if (characters.find(ch) != characters.end())
            {
                characters[ch]++;
            }
        }



        int additionalProblem = 0;

        for (char ch = 'A'; ch <= 'G'; ch++)
        {
            int needed = m - characters[ch];
            if (needed > 0)
                additionalProblem += needed;
        }

        results.push_back(additionalProblem);

        for (const auto &pair : characters)
        {
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }

    for (int result : results)
    {
        cout << result << endl;
    }


    return 0;
}
