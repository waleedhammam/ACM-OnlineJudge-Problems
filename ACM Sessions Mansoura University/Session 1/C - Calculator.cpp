#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char symbol;
    cin >> x >> symbol >> y;
    switch (symbol)
    {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '/':
            cout << x / y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
    }
}