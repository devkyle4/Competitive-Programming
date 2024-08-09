#include <iostream>
using namespace std;

int main()
{

    string word;
    string cap_word = "";
    cin >>
        word;

    for (int i = 0; i < word.length(); i++)
    {
        if (i == 0)
            word[i] = toupper(word[i]);

        cap_word = cap_word + word[i];
    }

    cout << cap_word;
    return 0;
}