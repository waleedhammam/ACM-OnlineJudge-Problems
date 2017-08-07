#include <iostream>

using namespace std;

long long fib(int n);
int main()
{
    int x;
    cin >> x;

    cout << fib(x) << endl;
}

long long fib(int n)
{
    long long fib[] = {0,1,1};

    for(long long i = 2; i <= n; i++)
        fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];

    return fib[n%3];
}