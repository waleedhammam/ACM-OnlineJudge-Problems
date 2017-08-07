#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, res = "";
    cin >> word;

    for (unsigned int i = 0; i < word.length(); i++) word[i] = tolower(word[i]);

    for (unsigned int i = 0; i < word.length(); i++)
    {
        if (word[i] == a || word[i] == e || word[i] == i || word[i] == o || word[i] == u || word[i] == y)
        {
            continue;
        }
        else
        {
            res.append(".");
            res.append(1, word[i]);
        }
    }

    cout << res << endl;
    return 0;
}

