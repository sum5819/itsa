#include<iostream>
using namespace std;  
    
int sumofnumber(int num){    
    int s = 0;    
    while(num){    
        s += num % 10;    
        num /= 10;    
    }    
    return s;    
}    
    
void swap(int *a, int j, int k){    
    int tmp = a[j];    
    a[j] = a[k];    
    a[k] = tmp;    
}    
    
void sort(int *a, int *b, int n){     
    for(int i = 0; i < n; i ++){     
        for(int j = 0; j < n-1-i; j ++){     
            if(a[j] > a[j+1]){     
                swap(a, j, j+1); 
                swap(b, j, j+1);    
            }     
            else if(a[j] == a[j+1]){    
                if(b[j] > b[j+1]){    
                    swap(a, j, j+1); 
                    swap(b, j, j+1);      
                }    
            }    
        }     
    }     
}     
    
int main(){    
    int n;    
    cin >> n;  
    int input[10];    
    int sum[10];    
    for(int i = 0; i < n; i ++){  
        cin >> input[i];  
        sum[i] = sumofnumber(input[i]);    
    }    
    sort(sum, input, n);    
    for(int i = 0; i < n-1; i ++){ 
        cout << input[i] << " ";    
    }   
    cout << input[n-1] << endl;
}  