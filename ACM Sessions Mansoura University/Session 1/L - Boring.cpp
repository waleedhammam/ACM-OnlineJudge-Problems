#include <iostream>

using namespace std;

int main()
{
    int cases[5];
    int odd = 0, even = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> cases[i];
        if (cases[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    cout << odd << " " << even << endl;
    return 0;
}