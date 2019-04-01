#include <iostream>
#define constant_size 10

int main() {
    int x[constant_size];
    for(int i = 0; i < constant_size; i++ ){
       x[i] = i;
        std::cout << x[i] << " " ;
    }
    std::cout << "\n";   
    std::cout << constant_size << std::endl;

    std::cout << x[10] << std::endl;
}

//define + -  define - + 
//meltdown, Specture