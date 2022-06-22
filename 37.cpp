#include<iostream>
using namespace std;

void sort(int *a){ 
    for(int i = 0;i < 4; i++){ 
        for(int j = 0; j < 3 - i ; j++){ 
            if(a[j] > a[j+1]){ 
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            } 
        } 
    } 
} 

int main(){
    int input[4];
    cin >> input[0] >> input[1] >> input[2] >> input[3];
    sort(input);
    if(input[0] == input[3]){
        cout << "WIN" << endl;
    }
    else if(input[0] != input[1] && input[1] != input[2] && input[2] != input[3]){
        cout << "R" << endl;
    }
    else if(input[0] == input[2] || input[1] == input[3]){
        cout << "R" << endl;
    }
    else{
        if(input[0] == input[1] && input[2] == input[3]){
            cout << input[2] + input[3] << endl;
        }
        else if(input[0] == input[1]){
            cout << input[2] + input[3] << endl;
        }
        else if(input[1] == input[2]){
            cout << input[0] + input[3] << endl;
        }
        else if(input[2] == input[3]){
           cout << input[0] + input[1] << endl;
        }
    }
}