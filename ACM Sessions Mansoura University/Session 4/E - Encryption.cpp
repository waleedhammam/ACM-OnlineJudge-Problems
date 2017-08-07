#include <iostream>

using namespace std;

int bin_count(long x);

int main()
{
    int N, X1, X2;
    cin >> N;
    X1 = bin_count(N);
    for(X2 = 0; N;)
    {
        X2 += bin_count(N % 10);
        N /= 10;
    }
    cout << X1 << " " << X2 << endl;
    return 0;
}

int bin_count(long x)
{
    int counter = 0;
    while(x)
    {
        if (x % 2 != 0) counter ++;
        x /= 2;
    }
    return counter;
}