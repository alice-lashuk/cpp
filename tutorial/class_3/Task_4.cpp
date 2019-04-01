#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x = 10;
    int y = 20;

    int *px = &x;
    cout << *px << endl;
    *px += 3;
    cout << *px << endl;
    px = &y;
    cout << *px << endl;
    *px += 3;
    cout << *px << endl;
    cout << x << endl;
    cout << y << endl;
    //cout << *px << endl;
}