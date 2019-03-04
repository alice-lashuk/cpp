#include<iostream>

int main(){
    std::cout << "What is your name?";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << '\n' << "What is your salary?";
    int sal;
    std::cin >> sal;
    std::cout << "Net salary= " << sal*0.8;
}