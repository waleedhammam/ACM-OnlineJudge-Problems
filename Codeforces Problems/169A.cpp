#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int complexity[n];
    for (int i = 0; i < n; i++) cin >> complexity[i];

    sort(complexity, complexity + n);

    cout << complexity[b] - complexity[b - 1] << endl;

}

