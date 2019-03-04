#include<iostream>
#include<math.h>

namespace t{

    double quardr() {
        double a, b, c, d;
        std::cout << "Enter 3 integers"; 
        std::cin >> a >> b >> c;
        d = (b*b)-(4*a*c);
        if(d < 0)
        {
            std::cout << " No solutions";
        }else if(d > 0) {
            std::cout << "The answers are: x1= " << (((-b + sqrt(d)))/2*a) << " and x2= "<< (((-b - sqrt(d)))/2*a) << std::endl; 
        }else{
            std::cout << "The only answer is : x= " << (-b/2*a) << std::endl; 
        }
    }
    
}
    int main(){
    t::quardr();
    }