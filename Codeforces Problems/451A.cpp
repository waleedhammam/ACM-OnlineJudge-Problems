#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m) n = m;
    (n % 2 != 0) ? cout << "Akshat" << endl : cout << "Malvika" << endl;
    return 0;
}

