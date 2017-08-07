#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n; float per = 0;
    cin >> n;
    float no[n];
    for (int i = 0; i < n; i++)
    {
        cin >> no[i];
        per += no[i] / 100;
    }
    printf("%.10f", (per / n) * 100);
}

