#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, tall = 0, small = 0;
    cin >> n;
    int x[n];

    do
    {
        i ++;
        cin >> x[i];
        if (x[i] > x[i - 1] && i != 1)
            tall ++;
        if (x[i] < x[i - 1] && i != 1)
            small ++;
    }
    while (i < n);
    cout << tall << " " << small << endl;
}