#include <iostream>

using namespace std;

long long fib(long long a, long long b, long long n);
int main()
{
    int t;
    cin >> t;
    long long a[t], b[t], n[t];
    long long out[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i] >> n[i];
        out[i] = fib(a[i], b[i], n[i]);
    }
    for (int i = 0; i < t; i++) cout << out[i] << endl;
    return 0;
}

long long fib(long long a, long long b, long long n)
{
    long long temp;
    for (int i = 0; i < n - 1; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}