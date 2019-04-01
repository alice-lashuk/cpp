#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    int tmp;
    std::cin >> tmp;
    const int size = tmp;
    int arr[size][3];
    std::fstream file;
    file.open("results.csv", std::ios::out | std::ios::app);

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++) {
        for(int j = 0; j < sizeof(arr[i])/sizeof(arr[i][0]); j++){
            arr[i][j] = rand()%101;
            
            file << arr[i][j]<< " ";
            
        }
        file << "\n";
    }
    file.close();
}
            