#include <iostream>
#include <iomanip>

using namespace std;

double calc(double n1, char op, double n2);
int main()
{
    int n;
    cin >> n;
    char op[n];
    double numbers[n + 1], res = 0;

    for (int i = 0; i < n; i++)
        cin >> op[i];

    for (int i = 0; i < n + 1; i++)
        cin >> numbers[i];

    for (int i = 0; i < n; i++)
    {
        res = calc(numbers[i], op[i], numbers[i + 1]);
        numbers[i + 1] = res;
    }

    cout << fixed << setprecision(2) << res << endl;
}
double calc(double n1, char op, double n2)
{
    if (op == '+') return n1 + n2;
    if (op == '-') return n1 - n2;
    if (op == '*') return n1 * n2;
    if (op == '/') return n1 / n2;

}