#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, h[10000] = {0};
    cin >> n;
    while (n--)
    {
        cin >> l;
        h[l] += 1;
    }

    int height = *max_element(h, h + 10000);
    int tower = 10000 - count(h, h + 10000, 0);

    cout << height << " " << tower << endl;

    return 0;
}

