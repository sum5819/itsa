#include<iostream>
using namespace std;
  
int main(){  
    int start_hour, start_min, end_hour, end_min, cost, total_min;  
    cin >> start_hour >> start_min >> end_hour >> end_min;
    total_min = end_hour * 60 + end_min - ( start_hour * 60 + start_min );  
    if(total_min <= 120){  
        cost = total_min / 30 * 30;  
    }  
    else if(total_min <= 240){  
        cost = 120 + (total_min - 120) / 30 * 40 ;  
    }  
    else{  
        cost = 120 + 160 + ( total_min - 240)/30 * 60 ;  
    }  
    cout << cost << endl;
}  