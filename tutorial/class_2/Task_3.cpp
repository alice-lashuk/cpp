#include <fstream>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
//std::ios::out - write to a file 
//std::ios::app - append to a file 

int main()
{
    std::fstream file;
    file.open("results.txt", std::ios::out | std::ios::app);
    if(file.good())
    {
        file << "1 2 3";
        file.close();
    }
    std::string line;
    int a, b, c;
    file.open("results.txt", std::ios::in);
    if(file.good()) {
        //file >> a >> b;
        file >> c >> a >> b;
    }
    int sum = a+b;
    cout << sum << endl;
    /*if(file.good()) {
        
        while(getline(file, line)){
            cout << line << '\n';
            
        }   
        file.close(); 
    }*/
}