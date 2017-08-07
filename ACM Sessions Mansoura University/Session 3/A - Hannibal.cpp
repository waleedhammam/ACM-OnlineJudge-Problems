#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned short int T,i,k;
    unsigned int paintingsNum;
    unsigned long long painting;

    cin >> T;
    string outs[T];

    for(i = 0; i < T; i++)
    {
        outs[i] = "YES";
        cin >> paintingsNum;
        for(k = 1; k <= paintingsNum; k++)
        {
            cin >> painting;
            if(k % 2 == 0)
            {
                if(!(painting % 2 == 0))
                {
                    outs[i] = "NO";
                    continue;
                }
            }
            else
            {
                if(painting % 2 == 0)
                {
                    outs[i] = "NO";
                    continue;
                }
            }
        }
    }

    for(i = 0; i < T; i++)
        cout << outs[i] << endl;

    return 0;
}