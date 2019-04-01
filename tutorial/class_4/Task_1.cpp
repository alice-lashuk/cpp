#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
int length(char *text) {
    int i = 0;
    char ch = text[i];
    while(ch != '\0'){
        //cout << text[i];
        ch = text[i++];    
    }
    return i-1;
}

int count(char *text) {
    int counter = 0;
    int i =0;
    char ch = text[i];
    while(ch != '\0'){
        ch = text[i++];
        if(ch == ' '){
            counter++; 
        }
    }
    counter ++;
    return counter;
}

char * copy(char* text) {
    char* cop;
    cop = text;
    return cop;
} 

char * rev(char * word){
   // bool pal = true; 
    char* out = new char[length(word)+2];
    int m =0;
    *(out+(length(word)+1)) = '\0';
    for(int k =length(word)+1; k>0;k--){
        out[m] = word[k-1];
        cout << word[k-1];
        m++;
    }
    return out;
}
bool palindrom(char* word){
    bool pal = true; 
    char* out = rev(word);
    int i=0;
    while(pal && i < length(word)){
        
        if(word[i]!=out[i+1]){
            pal = false;
        }
        i++;
    }
    cout << out<<endl;
    return pal;
}

//todo: replace given word to another
/*char* rep replace(char* text, char *giv, char * an){
    
}*/

int main()
{
    // easiest way
    char *c = "this is a text";
    char *b = "anna";

    // acceptable by standard
    char *cc = new char[100];
    
    std::cout << cc << std::endl;
    
    strcpy(cc, "this is a text");

    // todo: display the text
    std::cout << cc << std::endl;

    cout << length(cc) << endl;
    cout << "copy: " << copy(cc) << endl;
    cout << "rev: " << rev(cc)<< endl;;
    cout << "pal: " << palindrom(cc) << endl;
    cout << "pal: " << palindrom(b) << endl;
    cout << "counter: " << count(cc) << endl;
    delete[] c;
    delete[] cc;
}

