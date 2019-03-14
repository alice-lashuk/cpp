#include <iostream>
#include <algorithm>
//#define POL
//#define ENG
#if defined POL || defined ENG

    #if defined ENG
    int main() {
    int a;
    int maxv=0;
    int val;
    int curr;

    std::cout << "enter a natural number (0 if done): ";
    std::cin >> a;


    while(a!=0) {
        curr = (a /10) + (a % 10);
        if( maxv < curr) {
            maxv = curr;
            val = a;
        }
        std::cout << "enter a natural number (0 if done): ";
        std::cin >> a;
    }
    std::cout << "Max sum of digits was " << maxv << " for " << val;
    }

    #elif defined POL
    //don't know polish :(
    #endif
#endif