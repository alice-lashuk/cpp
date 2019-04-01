#include <iostream>
void minMaxRep(int a[], size_t size, int& mn, size_t& in, int& mx, size_t& ix){
    mx = a[0];
    mn = a[0];
    ix = 0;
    in = 0;
    for(int i = 0; i < size; i++ ) {
        if(mx < a[i]) {
            mx = a[i];
        } else if(mn > a[i]) {
            mn = a[i];
        }
    }
    for(int i = 0; i < size; i++){
        if(a[i] == mx ) {
            ix++;
        } else if(a[i] == mn) {
            in++;
        }
    }
    
}
int main() {
    using std::cout;
    int a[8] = {2,3,4,2,7,4,7,2};
    size_t size = sizeof(a)/sizeof(*a);
    int    mn, mx;
    size_t in, ix;
    minMaxRep(a,size,mn,in,mx,ix);
    cout << "Array: [ ";
    for (size_t i = 0; i < size; ++i)
        cout << a[i] << " ";
    cout << "]\n";
    cout << "Min = " << mn << " " << in << " times\n";
    cout << "Max = " << mx << " " << ix << " times\n";
}