#include <iostream>

using namespace std;

int main()
{
    int n, safe = 0;
    cin >> n;
    char x[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
            if (x[i][j] == '#')
            {
                cout << i + 1 << " " << j + 1 << endl;
                safe ++;
            }
        }
    }
    if (safe > 0)
        cout << safe << endl;
    else
        cout << "No hiding places" << endl;
    return 0;
}