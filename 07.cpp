#include<iostream>
using namespace std;

int main(){  
    int n, a1, a2, b1, b2;  
    char op;  
    cin >> n;
    for(int i = 0; i < n; i ++){  
        cin >> op >> a1 >> a2 >> b1 >> b2;
        if(op == '+'){  
            cout << a1 + b1 << " " << a2 + b2 << endl;
        }  
        if(op == '-'){  
            cout << a1 - b1 << " " << a2 - b2 << endl;
        }  
        if(op == '*'){  
            cout << a1 * b1 - a2 * b2 << " " << a1 * b2 + a2 * b1 << endl;
        }  
    }  
}  
