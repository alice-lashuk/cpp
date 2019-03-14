#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cout <<  "Enter 3 integers";
    std::cin >> a >> b >> c;
    int maxval;
    maxval = std::max(a, std::max(b,c));
    
    for(int i = maxval; i > 0; i--){

        if((i - a) > 0)
        {
            std::cout << " ";
        }else {
            std::cout << "*";
        }

        
        if((i - b) > 0){
            std::cout << " ";
        }else {
            std::cout << "*";
        }

        
        if((i - c > 0)){
            std::cout << " " << "\n";
        }else {
            std::cout << "*" << "\n";
        }       
    }
        
}
