#include <iostream>

int main() {

        std::string l;
        double max = 1000000;
        double mid = max / 2;
        double min = 1;
        int tr = 0;
        while (l != "y"){
            std::cout << "Is this n " << mid << "?";
            tr++;
            std::cin >> l; 
            if (l == "b") {
                max= mid;
            } else if (l == "s") {
                min = mid;
            }
            mid = (min + max) / 2;
        }
        std::cout << "Number that you think of is " << mid << ". Number of trials: " << tr;
    }
