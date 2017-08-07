#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 1)
    {
        cout << "Square" << endl;
    }
    else
    {
        double b = sqrt(a);
        int t = sqrt(a);

        if (b - t == 0)
            cout << "Unknown" << endl;
        else
            cout << "Rectangle" << endl;
    }
    return 0;
}