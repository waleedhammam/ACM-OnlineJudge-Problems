#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll n, a, b, res = 0;
    cin >> n;

    vector< pair<ll,ll> > days;

    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        days.push_back({a, b});
    }

    sort(days.begin(),days.end());

    for (ll i = 0; i < n; i++)
        (res <= days[i].second)? res = days[i].second : res = days[i].first;

    cout << res << endl;
    return 0;
}

