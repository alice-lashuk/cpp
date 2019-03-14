#include <iostream>

using namespace std;

enum apt_type{
    small,
    medium,
    large
};

namespace space
{
    struct str1
    {
        //person
        string name;
        string get_name(){
            return name;
        }
    };
    struct str2
    {
        //apt
        str1 owner;
        double size;
        int number;
        string short_desc;
    };
    struct str3
    {
        //building
        int n_floors;
        str2 appartment;
    };
//headers

}
int main(){
    space::str1 person;
    person.name = "bob";
    space::str2 apt;
    apt.owner = person;
    space::str3 building;
    building.n_floors = 10;
    building.appartment = apt;
}


