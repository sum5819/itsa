#include<iostream>
using namespace std;

int main(){
    int input;
    int output[8] = {0};
    int idx = 7;
    int flag = 0;
    cin >> input;
    if(input < 0){
        input = input * (-1);
        input = input - 1;
        flag = 1;
    }
    while(input > 0){
        if(input % 2 == 0){
            output[idx] = 0;
        }
        else{
            output[idx] = 1;
        }
        input = input / 2;
        idx --;
    }
    if(flag == 1){
        for(int i = 0; i < 8; i ++){
            if(output[i] == 0){
                output[i] = 1;
            }
            else if(output[i] == 1){
                output[i] = 0;
            }
        }
    }
    for(int i = 0; i < 8; i ++){
        cout << output[i];
    }
    cout << endl;
}
