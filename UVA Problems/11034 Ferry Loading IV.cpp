#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <queue>
#define FOR(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;

int main()
{
    int c, l, m, len, counter, LEFT = 0, RIGHT = 1, sum = 0; string bank;
    cin >> c;
    int res[c];

    vector<queue<int> > cars(2);
    for (int i = 0; i < c; i++)
    {
        cin >> l >> m;
        l *= 100;
        for (int j = 0; j < m; j++)
        {
            cin >> len >> bank;
            if (bank == "left")
                cars[LEFT].push(len);
            else
                cars[RIGHT].push(len);
        }

        int initial = LEFT;
        counter = 0;
        while (!(cars[LEFT].empty() && cars[RIGHT].empty()))
        {
            sum = 0;
            while (!cars[initial].empty() && sum + cars[initial].front() <= l)
            {
                sum += cars[initial].front();
                cars[initial].pop();
            }
            counter ++;
            if (initial == LEFT) initial = RIGHT;
            else if (initial == RIGHT) initial = LEFT;
        }
        res[i] = counter;
    }

    for (int i = 0; i < c; i++)
        cout << res[i] << endl;

    return 0;
}

