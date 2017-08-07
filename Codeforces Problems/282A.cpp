#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    string cases[num];
    int x = 0;
    string element;

    for (int i = 0; i < num; i++)
    {
        cin >> cases[i];
        element = cases[i];

        if (element == "X++")
            x ++;

        else if (element == "++X")
            ++ x;

        else
            x --;
    }
    cout << x << endl;

    return 0;
}
