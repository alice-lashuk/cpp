#include <iostream>

//find BMI

int main(){
    double h, w;
    std::cout << "Enter your height and weight";
    std::cin >> h >> w;
    std::cout << "Your BMI is: " << w/(h*h) <<"\n";
}