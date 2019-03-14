#include <iostream>

using namespace std;

int main(){
    int current_val, max_val, current_count, count_max, min_val, count_min;
    cout << "enter numbers: \n";
    count_min = 1; 
    current_count = 1;
    cin >> current_val;
    max_val = current_val;
    min_val = current_val;
    while(current_val != 0){
        if (current_val == max_val){
            count_max++;
        }else if(current_val == min_val){
            count_min++;
        }else{
            if (current_val < min_val){
                min_val = current_val;
                count_min=1;
            } else if (current_val > max_val) {
                max_val = current_val;
                count_max = 1;
            }
        }
        cin >> current_val;
    }
    cout << "Min: " << min_val << " " << count_min << " Max: " << max_val << " "<< count_max<<'\n';
}