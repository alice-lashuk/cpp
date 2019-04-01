#include <iostream>
using std::cout;
using std::endl;
size_t length(const char* cstr);
bool   isLetter(char c);
char*  reverse(char* cstr);
size_t words(const char* cstr);
size_t words2(const char* cstr);
char*  concat(char* t, const char* s);

int main() {
    using std::cout; using std::endl;
    char s1[] = "Alice in Wonderland";//'\0'
    cout << "reverse: " << reverse(s1) << endl;
    cout << "length : " << length(s1)  << endl;
    //char test = 't';
    //cout << isLetter(test);
    char s2[] = " ... for (int i = 0; i < n; ++i){...} ...";
    cout << "words  : " << words(s2)  << endl;
    cout << "words2 : " << words2(s2) << endl;

    /*char s3[100] = "Hello";
    //cout << sizeof(s3);
    cout << "concat : "
        << concat(concat(s3,", world"),"!") << endl;*/
}

char* reverse(char* cstr){
    int i = 0;
    while(cstr[i] != '\0')
    {
        cstr[++i];
    }
    char* arr = new char[i+1];
    //cout << i<<'\n';
    arr[i] = '\0';
    for (int l = 0; l < i;l++){
        arr[l] = cstr[i-l-1];
    }
    return arr;
}

size_t length(const char* cstr){
    int i = 0;
    while(cstr[i] != '\0')
    {
        cstr[++i];
    }
    return i;
}

bool  isLetter(char c){
    if(c >= 'A' && c<='z'){
        return true;
    }else return false;
}

size_t words(const char* cstr){
    int size = length(cstr);
    bool check = true;
    size_t count = 0;
    for(int i = 0; i < size; i++) {
        if(isLetter(cstr[i])){
            if(!check){
                count+=1;
            }
            check = true;
        }else check = false;
    }
    return count;
}

size_t words2(const char* cstr) {
    int size = length(cstr);
    bool check = true;
    size_t count = 0;
    int counter = 0;
    for(int i = 0; i < size; i++) {
        if(isLetter(cstr[i])){
            if(!check){
                counter++;
                if(counter > 1){
                    count++;
                }
            } if(counter == 1){
                check = false;
            }else{
                check = true;  
            }                 
        }else {
            counter = 0;
            check = false;
        }
    }
    return count;
}

/*char*  concat(char* t, const char* s){
    cout << sizeof(*t)/sizeof(t[0])<< endl;
    cout << sizeof(s) << endl;
    return 0;
}*/