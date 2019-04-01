#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x = 10;

    cout << "address of x: " << &x << endl;
    cout << "show value of x using its address: " << *&x << endl;

}