#include <iostream>

using namespace std;

int main()
{
    int N, counter = 0, O = 0;
    cin >> N;
    char mapp[N][N];
    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            cin >> mapp[row][col];

    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
        {
            if (mapp[row - 1][col] == 'O' && row != 0) O += 1;
            if (mapp[row + 1][col] == 'O' && row != N - 1) O += 1;
            if (mapp[row][col - 1] == 'O' && col != 0) O += 1;
            if (mapp[row][col + 1] == 'O' && col != N - 1) O += 1;
            if (O == 2 || O == 4)
            {
                counter ++; cout << row + 1 << " " << col + 1 << endl;
            }
            O = 0;
        }
    if (counter > 0)
        cout << counter << endl;
    else
        cout << "No target" << endl;
}