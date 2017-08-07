#include <iostream>

using namespace std;

int main()
{
    int n, m, sum(0), counter(1);
    cin >> n >> m;
    int groupes[n];
    for(int i = 0; i < n; i++)
        cin >> groupes[i];
    for(int i = 0; i < n; i++)
    {
        if (sum + groupes[i] <= m)
            sum += groupes[i];
        else
        {
            counter++;
            sum = groupes[i];
        }
    }

    cout << counter << endl;
}

