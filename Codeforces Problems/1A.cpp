#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long counter = ceil((double)n / (double)a) * ceil((double)m / (double)a);
    cout << counter << endl;
    return 0;
}

