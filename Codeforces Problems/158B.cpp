#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0, first = 0, second = 0, third = 0, fourth = 0;
    cin >> n;
    int groups[n];
    for (int i = 0; i < n; i++)
    {
        cin >> groups[i];
        if (groups[i] == 1) first ++;
        else if (groups[i] == 2) second ++;
        else if (groups[i] == 3) third ++;
        else if (groups[i] == 4) fourth ++;
    }

    counter += fourth + third + second / 2;
    first -= third;
    if (second % 2 == 1)
    {
        counter += 1;
        first -= 2;
    }
    if (first > 0)
    {
        counter += (first + 3) / 4;
    }

    cout << counter << endl;
    return 0;
}
