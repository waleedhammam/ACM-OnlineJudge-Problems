#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    unsigned char inputs[10][10];
    unsigned int row,col;
    bool ver , hor;
    for(row=0;row<10;row++)
    {
        for(col=0;col<10;col++)
            cin >> inputs[row][col];
    }
    for(row=0;row<10;row++)
    {
        ver = true;
        for(col=0;col<10;col++)
        {
           if(inputs[row][col] == '/')
           {
               ver = false;
               break;
           }
        }
        if (ver==true) break;
    }
    for(col=0;col<10;col++)
    {
        hor = true;
        for(row=0;row<10;row++)
        {
           if(inputs[row][col] == '/')
           {
               hor = false;
               break;
           }
        }
        if (hor==true) break;
    }
    if(ver||hor)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}