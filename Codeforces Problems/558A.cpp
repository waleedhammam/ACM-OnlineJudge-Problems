#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n, a, b, sum = 0;
    cin >> n;
    vector< pair<ll, ll> > trePOS;
    vector< pair<ll, ll> > treMIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > 0)
            trePOS.push_back(make_pair(a, b));
        else
            treMIN.push_back(make_pair(a, b));
    }

    sort(trePOS.begin(),trePOS.end());
    sort(treMIN.begin(),treMIN.end(), greater< pair<ll, ull> >());

    // cout << trePOS.size() << " " << treMIN.size() << endl;
    for (ll i = 0; i < min(trePOS.size(), treMIN.size() + 1); i++)
        sum += trePOS[i].second;

    // cout << sum << endl;
    for (ll i = 0; i < min(treMIN.size(), trePOS.size() + 1); i++)
        sum += treMIN[i].second;

    cout << sum << endl;
}

