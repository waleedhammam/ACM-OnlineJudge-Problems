#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
        if (words[i].length() <= 10)
            cout << words[i] << endl;
        else
        {
            string temp = words[i];
            cout << temp[0] << temp.length() - 2 << temp[temp.length() - 1] << endl;
        }
    }
}

