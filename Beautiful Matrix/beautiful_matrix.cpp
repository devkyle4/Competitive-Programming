#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int matrix[5][5];
    int r, c;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r - 2) + abs(c - 2);

    cout << moves << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5][5];
//     int moves = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> a[i][j];

//             if (a[i][j] == 1)
//             {
//                 moves += abs(j - 2);
//                 moves += abs(i - 2);
//             }
//         }
//     }

//     cout << moves;
//     return 0;
// }
