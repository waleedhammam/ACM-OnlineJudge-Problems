#include <iostream>
 
using namespace std;
 
long long arr_sum(int arr[], int n);
 
int main()
{
    int n, m;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int x[m];
        for (int j = 0; j < m; j++)
        {
            cin >> x[j];
        }
        cout << "Case " << i + 1 << ": " << arr_sum(x, m - 1) << endl;
    }
    return 0;
}
 
long long arr_sum(int arr[], int n)
{
    return (n < 0) ? 0 : arr[n] + arr_sum(arr, n-1);
}