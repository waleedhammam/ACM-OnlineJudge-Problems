#include <iostream>

using namespace std;

int gcd(int a, int b);
int main()
{
    int A, B;
    cin >> A >> B;
    cout << (A * B) / gcd(A, B) << endl;

    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}