#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int length;
    cin >> length;
    string word;
    cin >> word;
    int x[length], output[length];
    for (int i = 0; i < length; i++)
        x[i] = word[i];

    sort (x, x + length);

    int i = 0;
    do
    {
        for (int j = 0; j < length; j++)
        {
            if (word[i] == x[j])
            {
                x[j] = 0;
                output[i] = j + 1;
                i++;
            }
        }
    }
    while (i < length);

    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
            cout << output[i] << endl;
        else
            cout << output[i] << " ";
    }


    return 0;
}