#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int size;
    cout << "Type a size for the array: ";
    cin >> size;

    int *arr = new int[size];
    std::cout << arr << std::endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    for(int k = 0; k < size; k++){
        cout << arr[k] << ":";
    }
    cout << std::endl;
    cout << *(arr+1) << endl;
    cout << arr << endl;
    cout << *arr << endl;
    delete[] arr;
    
}