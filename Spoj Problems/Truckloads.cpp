#include <iostream>
#include <cstdio>
 
using namespace std;
 
typedef long long ll;
ll calc(ll x, ll y);
int main()
{
    ll n, m;
    while (cin >> n >> m) cout << calc(n, m) << endl;
}
ll calc(ll x, ll y)
{
    if (x <= y)
        return 1;
    else
        return calc(x / 2, y) + calc(x - x / 2, y);
}