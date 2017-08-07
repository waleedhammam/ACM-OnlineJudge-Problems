#include <iostream>

using namespace std;

int main()
{
    int T, S, F, M;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> S >> F >> M;
        (S + F >= 6666) ? cout << "Case " << i << ": dad" << endl :
                          cout << "Case " << i << ": mom" << endl;
    }
    return 0;
}