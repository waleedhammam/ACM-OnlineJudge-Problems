#include <iostream>

using namespace std;

int main()
{
    int testNum;
    cin >> testNum;
    int testCases[testNum];
    int counter = 0;

    for (int i = 0; i < testNum; i++)
    {
        cin >> testCases[i];

        while (testCases[i])
        {
            testCases[i] /= 10;
            counter ++;
        }

        testCases[i] = counter;
        counter = 0;
    }

    for (int i = 0; i < testNum; i++)
    {
        cout << testCases[i] << endl;
    }

    return 0;
}