#include <iostream>

using namespace std;

int main()
{

    unsigned long long num;
    cin >> num;

    unsigned long long sum = 0;
    int req = 0;

    while (num)
    {
        req = num % 10;
        sum += req;
        num /= 10;
    }

    cout << sum << endl;
}