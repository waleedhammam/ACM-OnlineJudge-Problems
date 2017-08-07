#include <iostream>

using namespace std;

int main()
{
    int n, xi = 0, yi = 0, zi = 0;
    cin >> n;

    int x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i] >> z[i];

    for (int i = 0; i < n; i++)
    {
        xi += x[i];
        yi += y[i];
        zi += z[i];
    }
    if ((xi == 0) && (yi == 0) && (zi == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

