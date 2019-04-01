#include <iostream>

using namespace std;

int fun1(int a){
  return ++a;
}

int fun2(int *a){
  *a+=1; 
  return *a; 
}

int main() {
  int b = 0;
  cout << fun1(b) << endl;
  b = 5;
  cout <<fun2(&b) << endl;
}

