#include<iostream>
using namespace std;  

int main(){
    string ans, input;
    
    cin >> ans;
    while(ans[0] != 0){
        int a = 0;
        int b = 0;
        cin >> input;
        if(input[0] == '0'){
            break;
        }
        for(int i = 0; i < 4; i ++){
            if(input[i] == ans[i]){
                a ++;
            }
        }
        for(int i = 0; i < 4; i ++){
            for(int j = 0; j < 4; j ++){
                if(input[j] == ans[i]){
                    b++;
                }
            }
        }
        b = b - a;
        cout << a << "A" << b << "B" << endl;
    }
    
}