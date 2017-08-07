#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    int n, n_new = 1;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
        cin >> input[i];

    sort(input, input + n);

    for(int i = 0; i < n -1; i++)
    {
     if(input[i]==input[i + 1])
       continue;
     else
       n_new++;
    }

    unique(input, input + n);

    cout << n_new << endl;

    for (int i = 0; i < n_new; i++)
    {
        if (i == n_new - 1)
            cout << input[i];
        else
            cout << input[i] << " ";
    }

}