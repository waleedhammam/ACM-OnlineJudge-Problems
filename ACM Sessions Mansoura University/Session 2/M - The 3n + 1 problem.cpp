#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long counter = 0, temp, maxCount = 0;

    for (int i = x; i <= y; i++)
    {
        temp = i;
        while(true)
        {
            if (temp == 1)
            {
                counter ++;
                break;
            }
            if (temp % 2 != 0)
            {
                temp = 3 * temp + 1;
                counter ++;
            }
            if (temp % 2 == 0)
            {
                temp /= 2;
                counter ++;
            }
        }

        if (counter > maxCount)
            maxCount = counter;

        counter = 0;
    }
    cout << maxCount << endl;
    return 0;
}