#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;

    for(int i = 1; i <= 8; i++)
    {
        string a = string(i,4) + string(i,7);
        do
        {
            stringstream ss(a);
            ll t;
            ss >> t;
            v.push_back(t);
        }
        while(next_permutation(a.begin(), a.end()));
    }

    sort (all(v));

    // cout << v.begin() << endl;

    cout << *lower_bound(all(v), n) << endl;

    return 0;
}

