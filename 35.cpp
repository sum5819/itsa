#include<iostream>
using namespace std;

void sort(int *a, int gift_num){   
    for(int i = 0; i < gift_num; i++){   
        for(int j = 0; j < gift_num - 1; j++){   
            if(a[j] > a[j+1]){   
                int tmp = a[j];   
                a[j] = a[j+1];   
                a[j+1] = tmp;   
            }   
        }   
    }   
}   
   
int main(){    
    int n, limit, member, gift_num;  
    int gift[100];  
    cin >> n;
    for(int i = 0; i < n; i++){   
        int cost = 0; 
        cin >> limit >> member >> gift_num;
        for(int j = 0; j < gift_num; j++){  
            cin >> gift[j]; 
        }   
        sort(gift, gift_num);   
        for(int j = 0; j < member; j++){   
            cost += gift[j];   
        }   
        if(cost <= limit){
            cout << cost << endl;    
        }   
        else{   
            cout << "Impossible" << endl;
        }   
    }   
}  