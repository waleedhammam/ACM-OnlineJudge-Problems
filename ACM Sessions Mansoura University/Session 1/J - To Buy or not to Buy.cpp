#include <iostream>

using namespace std;

int main()
{
    double has, price, good;

    cin >> has >> good;
    cin >> price;

    if (has >= price && price >= good)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}