#include <iostream>

int main() {
    int a, val, count, prev, max_count;

    std::cin >> a;
    max_count = 0;
    while(a!= 0) {
        if(prev != a ) {
            
            if(max_count < count) {
                max_count = count;
                val = prev;
            }
            count = 1;
            prev = a;
        } else {
            count++;    
        } 
    std::cin >> a;
    };

    std::cout << "Longest sequence: " << max_count << " times " << val;
}