#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

struct house
{
    std::string city;
    std::string street;
    int number;
};

int main()
{
    house *h = new house();
    
    //*h.city = "Warsaw";  order operations (to the right first)
    (*h).street = "Koszykowa";
    h->number = 86;

    free(h);
}