#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <char> vec;
    char x;
    while(cin >> x)
    {
        if (isalpha(x))
            vec.push_back(x);
        if (x == }) break;
    }
    sort(vec.begin(), vec.end());
     std::vector<char>::iterator it;
     it = std::unique(vec.begin(), vec.end());
     vec.resize(std::distance(vec.begin(),it));
     cout << vec.size() << endl;
}

