#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int N[cases], X[cases];
    int counter = 0;
    do
    {
        cin >> N[counter] >> X[counter];
        counter ++;
    }
    while (counter < cases);

    for (int i = 0; i < cases; i++)
    {
        if ((N[i] % 100) >= X[i])
        {
            N[i] += 100 - (N[i] % 100);
        }
        else
        {
            N[i] -= (N[i] % 100);
        }
        cout << N[i] << endl;
    }
    return 0;
}