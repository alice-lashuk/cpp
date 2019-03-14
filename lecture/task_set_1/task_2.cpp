#include <iostream>
#include <algorithm>
// macros
//#define GETMAX
//#define GETMIN
using std::min;
using namespace std;
#if defined GETMAX || defined GETMIN
int main(){
    int a,b,c;
    std::cout << "Enter three integers";
    std::cin >> a >> b >> c;
    #if defined GETMAX && defined GETMIN

        std::cout << "max= " << max(c, max(a,b)) << " min= " << min(c, min(a,b));
    
    #elif defined GETMAX
        std::cout << "max= " << max(c, max(a,b));

    #elif defined GETMIN
        std::cout << "min= " << min(c, min(a,b));
    #endif
}
#endif