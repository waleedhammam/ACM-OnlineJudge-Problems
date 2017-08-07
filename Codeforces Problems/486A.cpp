#include <iostream>

using namespace std;

long long f(long long n);
int main()
{
    unsigned long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

long long f(long long n)
{
    return (n % 2 == 0)? n / 2: (-1) * ((n + 1) / 2);
}

