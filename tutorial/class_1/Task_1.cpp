#include <iostream>
#include <string>
enum person_gender
{
    female,
    mail
};

struct person
{
    int yearOfBirth;
    std::string name;
    std::string surname;
    person_gender g;
};
          


int main() 
{
    person a;
}