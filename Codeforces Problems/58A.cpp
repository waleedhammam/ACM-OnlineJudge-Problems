#include <iostream>

using namespace std;

int main()
{
    string s, h = "hello";
    bool flag = false;
    cin >> s;
    for (unsigned int i = 0, counter = 0; i < s.length(); i++)
    {
        if (s[i] == h[counter]) counter ++;
        if (counter == 5)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (!flag) cout << "NO" << endl;
    return 0;
}

