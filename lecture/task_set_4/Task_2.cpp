#include <iostream>
using namespace std;
void histo(int arr[], size_t size) {
    int max_val = arr[0];

    for(int i = 0; i < size; i++) {
        max_val = max(max_val, arr[i]);
    }
    for(int k = 0; k< max_val; k++) {
       for(int j = 0; j< size; j++) {
           if(((max_val - arr[j])-k) > 0){
               cout << " ";
           }else cout << "*";
       } 
       cout << '\n';
    }
}
int main() {
int arr[]= {2,1,0,7,1,9};
size_t size = sizeof(arr)/sizeof(*arr);
histo(arr,size);
}

  