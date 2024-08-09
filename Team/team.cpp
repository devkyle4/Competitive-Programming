#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int can_solve = 0;
    int count = 0;
    int rows, cols = 3;
    cin >> rows;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                count = count + 1;
            }
        }
        if (count >= 2)
        {
            can_solve = can_solve + 1;
            count = 0;
        }
        else
        {
            count = 0;
        }
    }
    cout << can_solve;

    return 0;
}

