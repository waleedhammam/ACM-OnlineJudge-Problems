#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string name, host, pile, temp;
	cin >> name >> host >> pile ;

	temp = name + host ;
	sort(pile.begin(), pile.end()) ;
	sort(temp.begin(), temp.end());
    // cout << temo <<" " << pile << endl;
	(temp == pile)? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}

