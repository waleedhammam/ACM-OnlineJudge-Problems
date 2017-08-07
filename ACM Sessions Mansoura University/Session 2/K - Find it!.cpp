#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    int cases[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        cin >> cases[i];
        sum -= cases[i];
    }
    cout << sum << endl;
    return 0;
}