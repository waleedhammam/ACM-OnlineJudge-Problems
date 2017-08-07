#include <iostream>

using namespace std;

int main()
{
    int n, k, c, p, res = 0, found = 0;
    cin >> n >> k;
    cin >> c;
    int present[10000] = {-1};
    for (int i = 1; i <= c; i++)
    {
        cin >> p;
        present[p] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        found ++;
        if (found == k || present[i] == 1)
        {
            res ++;
            found = 0;
        }
    }
    cout << res << endl;
    return 0;
}

