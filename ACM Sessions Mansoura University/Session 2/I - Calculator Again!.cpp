#include <iostream>

using namespace std;

double res(double x, char op, double y);
int main()
{
    long long x, y;
    char op;

    cin >> x >> op >> y;
    x = res(x, op, y);

    while (true)
    {
        cin >> op;
        if (op != '.')
            cin >> y;
        else
            break;
        x = res(x, op, y);
    }
    cout << x << endl;
    return 0;
}
double res(double x, char op, double y)
{
    if (op == '+') x += y;
    if (op == '-') x -= y;
    if (op == '*') x *= y;
    if (op == '/') x /= y;
    return x;
}