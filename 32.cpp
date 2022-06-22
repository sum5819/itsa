#include<iostream>
using namespace std;

int main(){
    int k;
    string input, ouput;
    int len = 0;
    
    getline(cin, input);
    cin >> k;
    for(int i = 0; i < 100; i++){
        if(k < 0){
            k = k + 26;
        }
        else break;
    }
    for(int i = 0;i < input.length(); i++){
        if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')){
            if(input[i] >= 'A' && input[i] <= 'Z'){
                ouput[i] = 'A' + ((input[i] - 'A' + k) % 26);
            }
            if(input[i] >= 'a' && input[i] <= 'z'){
                ouput[i] = 'a' + ((input[i] - 'a' + k) % 26);
            }
        }
        else if(input[i] >= '0' && input[i] <= '9'){
            ouput[i] = '0' + ((input[i] - '0' + k) % 10);
        }
        else{
            ouput[i] = input[i];
        }
    }
    for(int i = 0; i < input.length(); i++){
        cout << ouput[i];
    }
    cout << endl;
    for(int i = 0;i < input.length(); i++){
        ouput[i] = '\0';
    }
}