#include <iostream>
using namespace std;


int main(){
    int size;
    cin >> size;

    int* arr = new int[size];

    cout << arr << endl;

    cout << *arr << endl;

    cout << arr[0] << endl;

    cout << *(arr+6) << endl;
    cout << arr[6] << endl;
}

