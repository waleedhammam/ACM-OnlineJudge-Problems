#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, counter = 0, a, b;
    cin >> n;
    string orig, want;
    cin >> orig >> want;

    for (int i = 0; i < n; i++)
    {
        a = (int) orig[i] - 48;
        b = (int) want[i] - 48;

        if (abs(a - b) <= 5)
            counter += abs(b - a);
        else
            counter += 10 % abs(b - a);
    }
    cout << counter << endl;
    return 0;
}

