#include<iostream>
using namespace std;  

int main(){
    string input;
    cin >> input;
    int code, p;
    //A:65,Z:90
    
    code = input[0];
    if(input[1] != '1' & input[1] != '2'){
        cout << "WRONG!!!" << endl;
    }
    for(int i = 1; i < 10; i++){
        if(input[i] < '0' || input[i] > '9'){
            cout << "WRONG!!!" << endl;
            break;
        }
        else{
            input[i] = input[i] - 48;
        }
    }

    if(input[0] < 'A' || input[0] > 'Z'){
        cout << "WRONG!!!" << endl;
    }
    
    else{
        if(input[0] >= 'A' && input[0] <= 'H'){
            code -= 55;
        }
        else if(input[0] == 'I'){
            code = 34;
        }
        else if(input[0] >= 'J' && input[0] <= 'N'){
            code -= 56;
        }
        else if(input[0] == 'O'){
            code = 35;
        }
        else if((input[0] >= 'P' && input[0] <= 'V')){
            code -= 57;
        }
        else if(input[0] == 'W'){
            code = 32;
        }
        else if((input[0] == 'X' || input[0] == 'Y')){
            code -= 58;
        }
        else if(input[0] == 'Z'){
            code = 33;
        }
        p = (code/10) + 9 * (code % 10);
        for(int i = 1; i < 9; i++){
            p += (9 - i) * input[i];
        }
        p += input[9];
        if(p % 10 == 0){
            cout << "CORRECT!!!" << endl;
        }
        else{
           cout << "WRONG!!!" << endl;
        }
    }
}