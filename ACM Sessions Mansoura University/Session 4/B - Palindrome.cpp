#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, counter = 0;
    cin >> N;
    char palin[N], rev[N];
    for (int i = 0; i < N; i++)
    {
        cin >> palin[i];
        rev[i] = palin[i];
    }

    reverse(rev, rev + N);

    for (int i = 0; i < N; i++)
    {
        if (rev[i] != palin[i])
        {
            if (palin[i] >= rev[i])
            {
                palin[i] = rev[i];
                rev[N - 1 - i] = palin[i];
                counter ++;
            }
            else
            {
                rev[i] = palin[i];
                palin[i] = rev[N - 1 - i];
            }
        }
    }
    cout << counter << endl;
    for (int i = 0; i < N; i++)
        cout << palin[i];

    return 0;
}