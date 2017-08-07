#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    string names[n], temp; int grades[n];
    char first[n], need;

    for (int i = 0; i < n; i++)
        cin >> names[i] >> grades[i];

    cin >> need;

    for (int i = 0; i < n; i++)
    {
        temp = names[i];
        if (need == temp[0])
            res += grades[i];
    }

    cout << res << endl;

    return 0;
}