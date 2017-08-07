#include <iostream>
#include <algorithm>
#define FOR(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int n; cin >> n;
    int box[n]; FOR(i, n) cin >> box[i];
    sort(box, box + n);
    FOR(i, n) (i == n - 1) ? cout << box[i] : cout << box[i] << " ";
}

