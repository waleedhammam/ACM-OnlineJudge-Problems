#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h;
    float v;
    cin >> h;

    v = sqrt(2 * 10 * h);
    cout << fixed << setprecision (3) << v << endl;

}