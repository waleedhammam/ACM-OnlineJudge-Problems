#include <iostream>

using namespace std;

int main()
{
    long n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;

    sall -= sk;

    for(long i = 0; i < k; i++)
    {
        cout << sk /(k - i) << " ";
        sk -= sk /(k - i);
    }
    // return 0;//
    for(long i = k; i < n; i++)
    {
        cout << sall /(n - i) << " ";
        sall -= sall /(n - i);
    }
}

