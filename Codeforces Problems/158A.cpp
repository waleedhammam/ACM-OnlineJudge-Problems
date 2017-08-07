#include <iostream>

using namespace std;

int main()
{
    int N, K, counter = 0;
    cin >> N >> K;
    int scores[N];
    for (int i = 1; i <= N; i++) cin >> scores[i];

    for (int i = 1; i <= N; i++)
        if (scores[i] > 0 && scores[i] >= scores[K]) counter ++;

    cout << counter << endl;
    return 0;
}
