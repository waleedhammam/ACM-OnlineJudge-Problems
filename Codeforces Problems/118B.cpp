#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, k, m;
    for (i = 0; i <= n; i++)
    {
        for (j = 2 * n - 2 * i; j > 0; j --)
            cout << " ";

        for (k = 0; k <= i; k++)
            (i == 0) ? cout << k : cout << k << " ";

        for (m = i - 1; m >= 0; m--)
            (m == 0) ? cout << m : cout << m << " ";

        cout << endl;
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 2 * n - 2 * i; j > 0; j --)
            cout << " ";

        for (k = 0; k <= i; k++)
            (i == 0)? cout << k: cout << k << " ";

        for (m = i - 1; m >= 0; m--)
            (m == 0) ? cout << m : cout << m << " ";
        cout << endl;
    }
}

