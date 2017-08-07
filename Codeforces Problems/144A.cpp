#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    int min, max, imin=0, imax=0;
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (i == 0)
        {
            min = a; max = a;
        }
        else
        {
            if(a > max){max = a; imax = i;}
            if(a <= min){min=a; imin=i;}
        }
     }
     if (imin < imax) flag = true;
     (flag) ? cout << n - 1 - imin + imax - 1 << endl : cout << n - 1 - imin + imax << endl;
}

