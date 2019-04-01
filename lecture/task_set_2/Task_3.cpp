#include <iostream>
#include <cmath>
using std::cout; using std::endl;

const double* aver(const double* arr, size_t size, double& average) 
{
    double sum = 0;
    int count = 0;
    for(int i = 0; i < size ; i++) 
    {
        sum+= arr[i];
        count++;
    }
   
    average = sum/count;
    int diff = arr[0];
    
    double a;
    for(int i = 0; i < size ; i++) 
    {
       if(diff >= abs(average - arr[i])){
            a = arr[i];
            diff = abs(average - arr[i]);
       }
    }
    return &a;
}

int main () 
{
    

    double arr[] = {1,7,5,4,3,2};
    size_t size = sizeof(arr)/sizeof(arr[0]);
    double average = 0;
    const double* p = aver(arr, size, average);
    cout << *p << " " << average << endl;
}