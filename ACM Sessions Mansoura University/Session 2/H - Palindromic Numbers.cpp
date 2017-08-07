#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0, res;
    cin >> n;


    unsigned long long cases[n];
    unsigned long long test, rev, last;

    for (int i = 0; i < n; i++)
    {
        cin >> cases[i];
        test = cases[i];
        rev = 0;
        if (test == 0)
        {
            counter ++;
        }
        while(test)
        {
            last = test % 10;
            rev = rev * 10 + last;
            if (rev == cases[i])
                counter ++;
            test /= 10;
        }
    }

    res = n - counter;
    cout << res << endl;
    return 0;
}