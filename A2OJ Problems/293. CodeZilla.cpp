#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MAX 1001

using namespace std;

typedef vector<int> vi;
typedef vector < vi > vvi;
typedef pair<int , int> ii;
typedef long long ll;

const int OO = (int)1e9;
ll n;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        string cf, cl;
        cin >> N >> cf >> cl;
        string names[N];
        for (int j = 0; j < N; j++) cin >> names[j];

        char f = towlower(cf[0]), l = tolower(cl[0]);
        cout << "Case " << i << ":" << endl;

        for (int k = 0; k < N; k++)
        {
            string temp = names[k];
            bool flag = false;
            if (f == l)
            {
                for (unsigned int m = 0; m < temp.length(); m++)
                {
                    if (f ==  tolower(temp[m]))
                    {
                        flag = true;
                        break;
                    }
                }
                (flag) ? cout << "YES" << endl : cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}