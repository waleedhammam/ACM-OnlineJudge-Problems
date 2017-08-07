#include <iostream>

using namespace std;

int main()
{
    int n, counter = 1;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i ++) cin >> x[i];

    for (int i = 0; i < n - 1; i ++)
    {
        if (x[i + 1] != x[i])
            counter ++;
    }
    cout << counter << endl;
}

