#include <iostream>
 
using namespace std;
 
string beaty(int n, string s);
int main()
{
    int n; while(cin >> n) cout << beaty(n, "") << endl;
}
string beaty(int n, string s)
{
    if(n == 0) return s;
    else if (n == 1) return beaty(n - 1, s + "1\n") + beaty(n - 1, s + "2\n") + beaty(n - 1, s + "3\n");
    else return beaty(n - 1, s + "1") + beaty(n - 1, s + "2") + beaty(n - 1, s + "3");
}
 