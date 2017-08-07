#include <iostream>

using namespace std;

int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy;
    cin >> dx >> dy >> bx >> by;
    if (dx < bx)
    {
        ax = dx;
        ay = by;
        cx = bx;
        cy = dy;
        cout << "(" << ax << "," << ay << ")" << "(" << bx << "," << by << ")" \
    "(" << cx << "," << cy << ")" << "(" << dx << "," << dy << ")" << endl;
    }
    else
    {
        ax = bx;
        ay = dy;
        cx = dx;
        cy = by;
        cout << "(" << ax << "," << ay << ")" << "(" << dx << "," << dy << ")" \
    "(" << cx << "," << cy << ")" << "(" << bx << "," << by << ")" << endl;
    }


}