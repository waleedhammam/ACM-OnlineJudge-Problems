#include <iostream>

using namespace std;

int main()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    if (p1 < p2 && p1 < p3)
        cout << p1 << endl;
    else if (p2 < p1 && p2 < p3)
        cout << p2 << endl;
    else if (p3 < p1 && p3 < p2)
        cout << p3 << endl;
}