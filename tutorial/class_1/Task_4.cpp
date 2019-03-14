#include <iostream>
union X
{
    int   integer;
    float floating;
};

int main()
{
    X x;
    x.integer = 3;
    x.floating = 3.14f;
    std::cout << x.integer << std::endl;
    std::cout << x.floating << std::endl;
}