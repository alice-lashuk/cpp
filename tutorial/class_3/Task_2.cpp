#include <iostream>
#include <string>

struct house
{
    std::string city;
    std::string street;
    int number;
};

void buyingOnline(house *addr)
{
    std::cout << (*addr).city   << std::endl
              << (*addr).street << std::endl
              << (*addr).number << std::endl;
}

int main()
{
    house home;
    home.city = "Warsaw";
    home.street = "Koszykowa";
    home.number = 86;

    buyingOnline(&home);
}