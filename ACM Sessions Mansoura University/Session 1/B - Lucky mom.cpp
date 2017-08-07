#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
        cout << "unlucky" << endl;
    else
        cout << "lucky" << endl;

    return 0;
}