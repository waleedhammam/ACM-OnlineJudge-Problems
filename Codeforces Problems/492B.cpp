#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n, l;
    double maxDis = 0;
    cin >> n >> l;
    int lanPos[n];
    for (int i = 0; i < n; i++)
        cin >> lanPos[i];

    sort (lanPos, lanPos + n);

    for (int i = 0; i < n - 1; i++)
        if (lanPos[i + 1] - lanPos[i] > maxDis)
            maxDis = lanPos[i + 1] - lanPos[i];

    maxDis /= 2;
    double startPos = lanPos[0], finalPos = l - lanPos[n - 1];
    if (startPos > maxDis)
        maxDis = startPos;
    if (finalPos > maxDis)
        maxDis = finalPos;

    printf("%.10f", maxDis);
    return 0;
}
