#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
long long comb(long long a, long long b);
long long fact(long long x);
int main()
{
    long long n, m, t, counter = 0;
    cin >> n >> m >> t;

    for (int i = 4; i < t; ++i)
    {
        counter += comb(n, i) * comb(m, t - i);
    }

    cout << counter << endl;
}
long long comb(long long a, long long b)
{
    long long res = 1;
    for(int i = 1; i <= b; i++)
    {
        res *= a - i + 1;
        res /= i;
    }
    return res;
}
long long fact(long long x)
{
    long long res = 1;
    while (x > 1)
    {
        res *= x;
        x --;
    }
    return res;
}

