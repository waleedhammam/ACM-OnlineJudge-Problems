#include <iostream>
 
using namespace std;
bool found(int x[], int n, int item);
int main()
{
    int n, k, it;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        int arr[k];
        for (int j = 0; j < k; j++)
        {
            cin >> arr[j];
        }
        cin >> it;
        found(arr, k - 1, it) ? cout << "Case " << i + 1 << ": YES" << endl : cout << "Case " << i + 1 << ": NO" << endl;
    }
    return 0;
}
bool found(int x[], int n, int item)
{
    if (n < 0)
        return false;
    else
        return (x[n] == item) ? true : found(x, --n, item);
}