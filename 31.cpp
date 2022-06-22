#include<iostream>
#include <string>
#include<sstream>
using namespace std;


int main(){
    string input;
    int arr[20];
    int idx = 0;
    int flag = 0;
    while(getline(cin, input)){
        idx = 0;
        flag = 0;
        stringstream ss(input);
        while(ss >> arr[idx++]){
        }
        idx --;
        for(int i = 0; i < idx; i++){
            int cnt = 0;
            for(int j = 0; j < idx; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
            if(cnt > idx/2){
                flag = 1;
                cout << arr[i] << endl;
                break;
            }
        }
        if(flag == 0){
            cout << "NO" << endl;
        }
    }
}