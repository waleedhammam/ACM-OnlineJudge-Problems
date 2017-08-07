#include <iostream>

using namespace std;

int main()
{
    int testNum;
    cin >> testNum;
    string testCases[testNum];
    bool flag = false, flag1 = false, flag2 = false, flag3 = false;

    for (int i = 0; i < testNum; i++)
    {
        cin >> testCases[i];
        string temp = testCases[i];

        for (unsigned int j = 0; j < temp.length(); j++)
        {
            if (flag == false && temp[j] == 'n')
            {
                flag = true;
            }
            if (flag == true && temp[j] == 'a')
            {
                flag1 = true;
            }
            if (flag1 == true && temp[j] == 'd')
            {
                flag2 = true;
            }
            if (flag2 == true && temp[j] == 'i')
            {
                flag3 = true;
            }
            if (flag3 == true && temp[j] == 'a')
            {
                testCases[i] = "YES";
                break;
            }
            else
            {
                testCases[i] = "NO";
            }
        }
        flag = false; flag1 = false; flag2 = false; flag3 = false;
    }

    for (int i = 0; i < testNum; i++)
    {
        cout << testCases[i] << endl;
    }

    return 0;
}