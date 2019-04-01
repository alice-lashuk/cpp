#include <algorithm>  // min
#include <iostream>
#include <fstream>

int main() {
    constexpr size_t N = 5;
    int greatest[N];
    std::ifstream inpfile("NGreatest.dat");
    size_t count{};  // how many numbers have been read
    int n{};         // 'n' will hold the number just read
    size_t ile{};    // number of elements inserted into
                     // the array 'greatest'

    // maybe some auxiliary variables, but no
    // arrays or other kinds of collections!
    // ...

    while (inpfile >> n) {
        ++count;
        // ... insert your code here
    }

      // numData - number of valid elements in
      // 'greatest',  may be smaller than N
    size_t numData = std::min(ile, N);
    std::cout << count   << " numbers read. Greatest "
              << numData << " different are: ";
    for (size_t i = 0; i < numData; ++i)
        std::cout << greatest[i] << " ";
    std::cout << "\n";
}