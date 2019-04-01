#include <cstdlib>
#include <iostream>
#include <ctime>
#define RAND_MAX 100

using std::srand;
using std::time;
using std::rand;
using std::cout;
using std::endl;

int main() {
    // setting global seed
    srand(time(nullptr));
    // randomizing in range: [0,RAND_MAX]
    std::cout << "[0, " << RAND_MAX << "]: " << (rand()%101) << std::endl;
    
}

     