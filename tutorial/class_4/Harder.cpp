#include <iostream>
using namespace std;

int* resize(int * source, int size, int new_size) {
    int * arr = new int[new_size];
    for(int i = 0; i < size; i++){
        arr[i] = *(source +i);
    }
    return arr;
}

int main() {
    int size = 3;
    int * a = new int[size];
    for(int i ; i< size; i++){
        a[i] = i;
    }
    //cout << *(resize(a, size, 5))<< endl;
}