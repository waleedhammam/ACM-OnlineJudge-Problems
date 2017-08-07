#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(int num);
int result(int x);

int main()
{
    int cases;
    cin >> cases;
    int start[cases], finish[cases];
    int counter = 0;
    do
    {
        cin >> start[counter] >> finish[counter];
        counter ++;
    }
    while (counter < cases);

    int times = 0;
    for (int i = 0; i < cases; i++)
    {
        for (int j = start[i]; j <= finish[i]; j++)
        {
            if (isPrime(j) && isPrime(result(j)))
            {
                times += 1;
            }
        }
        cout << times << endl;
        times = 0;
    }
    return 0;
}

bool isPrime(int num)
{
    if ((num % 2 == 0 && num != 2) || num < 2)
    {
        return false;
    }

    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int result(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}