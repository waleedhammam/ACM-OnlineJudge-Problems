#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test;
    cin >> test;

    bool b1 = false, b2 = false, b3 = false, b4 = false, b5 = false, b6 = false, b7 = false;

    for (unsigned int i = 0; i < test.length(); i++)
    {

        if (test[i] == '1')  { b1 = true; }
        if (test[i] == '2')  { b2 = true; }
        if (test[i] == '3')  { b3 = true; }
        if (test[i] == '4')  { b4 = true; }
        if (test[i] == '5')  { b5 = true; }
        if (test[i] == '6')  { b6 = true; }
        if (test[i] == '7')  { b7 = true; }
    }

    if (b1 && !b2 && b3 && b4 && b5 && b6 && b7)
        cout << "0" << endl;
    else if (!b1 && !b2 && !b3 && b4 && !b5 && b6 && !b7)
        cout << "1" << endl;
    else if (b1 && b2 && b3 && b4 && !b5 && !b6 && b7)
        cout << "2" << endl;
    else if (b1 && b2 && b3 && b4 && !b5 && b6 && !b7)
        cout << "3" << endl;
    else if (!b1 && b2 && !b3 && b4 && b5 && b6 && !b7)
        cout << "4" << endl;
    else if (b1 && b2 && b3 && !b4 && b5 && b6 && !b7)
        cout << "5" << endl;
    else if (b1 && b2 && b3 && !b4 && b5 && b6 && b7)
        cout << "6" << endl;
    else if (b1 && !b2 && !b3 && b4 && !b5 && b6 && !b7)
        cout << "7" << endl;
    else if (b1 && b2 && b3 && b4 && b5 && b6 && b7)
        cout << "8" << endl;
    else if (b1 && b2 && b3 && b4 && b5 && b6 && !b7)
        cout << "9" << endl;
    else
        cout << "-1" << endl;

    return 0;
}