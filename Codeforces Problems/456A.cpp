#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b;
    bool flag(false);
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a > b) flag = true;
    }

    (flag) ? cout << "Happy Alex" << endl : cout << "Poor Alex" << endl;
    return 0;
}

