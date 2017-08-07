#include <iostream>

using namespace std;

int main()
{
    int ROWS, COLS, sum = 0;
    cin >> ROWS >> COLS;
    char mine[ROWS][COLS];
    for (int row = 0; row < ROWS; row++)
        for (int col = 0; col < COLS; col++)
            cin >> mine[row][col];

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            sum = 0;
            if (mine[row][col] == '.')
            {
                if (mine[row - 1][col] == '*' && row != 0) sum += 1;
                if (mine[row + 1][col] == '*' && row != ROWS - 1) sum += 1;
                if (mine[row][col - 1] == '*' && col != 0) sum += 1;
                if (mine[row][col + 1] == '*' && col != COLS - 1) sum += 1;

                if (mine[row - 1][col - 1] == '*' && row != 0 && col != 0) sum += 1;
                if (mine[row + 1][col + 1] == '*' && row != ROWS - 1 && col != COLS - 1) sum += 1;
                if (mine[row + 1][col - 1] == '*' && col != 0 && row != ROWS - 1) sum += 1;
                if (mine[row - 1][col + 1] == '*' && col != COLS - 1 && row != 0) sum += 1;
                mine[row][col] = sum;
                cout << (int)mine[row][col];
            }
            else
                cout << mine[row][col];
        }
        cout << endl;
    }
}