#include <iostream>

using namespace std;

int main()
{
    int R, C, x = 0, y = 0, sum = 0;
    cin >> R >> C;
    char seat[R][C];
    bool flag = true;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> seat[i][j];
            if (seat[i][j] == 'E' && flag)
            {
                x = i; y = j;
                sum = x + y + 2;
                flag = false;
            }
            else if (seat[i][j] == 'E' && !flag && sum > i + j + 2)
            {
                x = i; y = j;
                sum = x + y + 2;
            }
        }
    }
    if (sum > 0)
        cout << x + 1 << " " << y + 1 << endl;
    else
        cout << -1 << endl;

    return 0;
}