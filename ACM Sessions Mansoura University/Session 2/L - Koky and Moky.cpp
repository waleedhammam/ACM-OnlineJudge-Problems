#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long x, y, q;
    cin >> x >> y >> q;
    long long n[q];
    double prob = (float) y / x;
    for (int i = 0; i < q; i++)
        cin >> n[i];

    for (int i = 0; i < q; i++)
        cout << ceil(n[i] * prob) << endl;

    return 0;
}