#include <algorithm>
#include <iostream>
void ord3(double& a, double& b, double& c){
    double temp1 = std::max(c, std::max(a,b));
    double temp2 = std::min(a, std::min(b,c));
    double temp3;
    if(a < temp1 && a > temp2) {
        temp3 = a;
    } else if( b < temp1 && b > temp2) {
        temp3 = a;
    } 
        a = temp2;
        b = temp3;
        c = temp1;
}
void getMinMax(double &a, double& b, double& c,
               double*& ptrMin, double*& ptrMax) {
    ord3(a, b, c);
    ptrMin = &a;
    ptrMax = &c;
}

void getMinMax(double *a, double* b, double* c,
               double** ptrMin, double** ptrMax) {
    getMinMax(*a,*b,*c,*ptrMin,*ptrMax);
}

void printOrd(const double* a, const double* b,
                               const double* c) {
    using std::cout; using std::endl;
    cout << *a << " " << *b << " " << *c << endl;
}
void printMinMax(const double* pmn, const double* pmx) {
    using std::cout; using std::endl;
    std:: cout << "Min = " << *pmn << "; "
               << "Max = " << *pmx << std::endl;
}

void ord3(double* a, double* b, double* c){
    double temp1 = std::max(*c, std::max(*a,*b)); 
    double temp2 = std::min(*a, std::min(*b,*c));
    double temp3;
    if(*a < temp1 && *a >= temp2) {
        temp3 = *a;
    } else if( *b < temp1 && *b >= temp2) {
        temp3 = *b;
    } else {
        temp3 = *c;
    }
        *a = temp2;
        *b = temp3;
        *c = temp1;
}



int main() {
    double a, b, c, *ptrMin, *ptrMax;

    a = 2; b = 1; c = 3;
    ord3(a,b,c);
    printOrd(&a, &b, &c);
    a = 3; b = 2; c = 1;
    ord3(&a,&b,&c);
    printOrd(&a, &b, &c);
    a = -1; b = -1; c = 1;
    ord3(&a, &b, &c);
    printOrd(&a, &b, &c);

    a = 2; b = 3; c = 1;
    getMinMax(a,b,c,ptrMin,ptrMax);
    printMinMax(ptrMin, ptrMax);
    a = 3; b = 1; c = 2;
    getMinMax(&a,&b,&c,&ptrMin,&ptrMax);
    printMinMax(ptrMin, ptrMax);
    a = 3; b = 3; c = -1;
    getMinMax(&a,&b,&c,&ptrMin,&ptrMax);
    printMinMax(ptrMin, ptrMax);
    
}