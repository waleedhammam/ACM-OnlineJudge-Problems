#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string in, res = "";
    cin >> in;
    bool flag = false;
    unsigned int i = 0;
    while(i < in.length())
    {
        if(in[i] == W && in[i+1] == U && in[i+2] == B && !flag)
        {
            res +=  ;
            i += 3;
            flag = true;
        }
        else if(in[i] == W && in[i+1] == U && in[i+2] == B && flag)
            i +=3;
        else
        {
            res += in[i];
            i++;
            flag = false;
        }
    }
    if (res[0] ==  ) res.erase(res.begin(), res.begin() + 1);
    cout << res << endl;
    return 0;
}

