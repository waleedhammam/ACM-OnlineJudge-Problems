#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    char cases[num];
    int counter = 0;

    for (int i = 0; i < num; i++)
    {
        cin >> cases[i];

        if (cases[i] == '*')
            counter ++;

        else if (cases[i] == '>')
            counter += 2;

        if (counter > 20)
          counter %= 20;
    }

    cout << counter << endl;
    return 0;
}