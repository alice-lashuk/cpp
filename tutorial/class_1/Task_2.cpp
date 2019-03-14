#include <iostream>
#include <string>

struct student
{
    std::string name;
};

student create();

std::string to_string(student s);

int main() {
    student a = create();
    a.name = "alice";
    to_string(a);
}

student create() {
    student s;
    return s;
} 

std::string to_string(student s)
{
    return s.name;
    
}

