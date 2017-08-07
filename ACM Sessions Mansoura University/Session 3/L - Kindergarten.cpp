#include <iostream>

using namespace std;

int main()
{
    int N, M, first;
    while (cin >> N >> M)
    {
        int counter = 0;
        if (N == 0 && M == 0) break;

        int num[N];
        for (int i = 0; i < N; i++)
        {
            cin >> num[i];
            if (num[i] == M)
            {
                if (counter == 0)
                    first = i;
                counter ++;
            }
        }
        if (counter > 0)
            cout << counter << " " << first << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}