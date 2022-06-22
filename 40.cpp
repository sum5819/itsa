#include<iostream>
using namespace std;

int main(){
    char c;
    int num[10];
    int num2[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        cin >> c;
        if(c == ' '|| c == '\n'){
            i--;
        }
        else if(c >= '0' && c <= '9'){
            num[i] = c - '0';
        }
        else{
            num[i] = 10;
        }
    }
    for(int i = 0; i < 10; i++){
        sum += num[i];
        num2[i] = sum;
    }
    sum = 0;
    for(int i = 0; i < 10;i++){
        sum += num2[i];
    }
    if(sum % 11 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}