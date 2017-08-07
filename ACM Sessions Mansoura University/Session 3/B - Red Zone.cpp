#include <iostream>
#include <cstdlib>

using namespace std;

void my_bubble(int arr[], int n);
int main()
{
    int n = 5;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    my_bubble(num, n);
    cout << num[n / 2] << endl;
    return 0;
}

void my_bubble(int arr[], int n)
{
    for (int k = 0; k < n - 1; k++)
    {
        int swaps = 0;
        for (int i = 0; i < n - 1 - k; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                swaps++;
            }
        }
        if (!swaps) break;
    }
}