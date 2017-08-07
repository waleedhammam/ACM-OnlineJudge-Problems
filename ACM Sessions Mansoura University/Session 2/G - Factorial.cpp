#include <iostream>

using namespace std;

long long fact(int n);
int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}
long long fact(int n)
{
    long long sum = 1;
    do
    {
        sum *= n;
        n --;
    }
    while (n > 1);
    return sum;
}