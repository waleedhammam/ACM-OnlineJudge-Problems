#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, c, x = 0, res = 0;
    cin >> n;
    while(n)
    {
        c = n % 10;
        n /= 10;
        res += (c * pow(2, x));
        x ++;
    }
    cout << res << endl;
    return 0;
}