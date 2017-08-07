#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, j = 0, k = 0, x;
    cin >> n;
    long long odd[n], even[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even[j] = x;
            j++;
        }
        else
        {
            odd[k] = x;
            k++;
        }
    }

    reverse(odd, odd + k);

    for (long long i = 0; i < k; i++)
    {
        if (i == 0)
            cout << odd[i];
        else
            cout << " " << odd[i];
    }

    for (long long i = 0; i < j && k != 0; i++)
        cout << " " << even[i];

    for (long long i = 0; i < j && k == 0; i++)
    {
        if (i == 0)
            cout << even[i];
        else
            cout << " " << even[i];
    }
}