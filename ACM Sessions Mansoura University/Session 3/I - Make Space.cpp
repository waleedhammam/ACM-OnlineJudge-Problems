#include <iostream>

using namespace std;

int bubble(int array[], int n);
int main()
{
    int n, swaps;
    cin >> n;
    int student[n];
    for (int i = 0; i < n; i++)
        cin >> student[i];

    swaps = bubble(student, n);

    if (swaps == 0)
    {
        cout << "Ordered";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n -1)
                cout << student[i];
            else
                cout << student[i] << " ";
        }
    }
    cout << endl;
    cout << swaps << endl;

    return 0;
}
int bubble(int array[], int n)
{
    int counter = 0;
    for (int k = 0; k < n - 1; k++)
    {
        int swaps = 0;
        for (int i = 0; i < n - 1 - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                swaps++;
                counter += 1;
            }
        }
        if (!swaps)
        {
            break;
        }
    }
    return counter;
}