#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> task;
    for(int i = 0, x; i < m; i++)
    {
        cin >> x;
        task.push_back(x);
    }
    long long counter = 0;

    for(int i = 0; i < m-1; i++)
    {
        if(task[i] > task[i+1])
        {
            counter += n;
        }
    }
    counter += task[m - 1] -1;

    cout << counter << endl;
    return 0;
}

