#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[3][3];
    int flag = 0;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            cin >> n;
            arr[i][j] = n;
        }
    }
    for(int x = 0; x < 3; x ++){
        if(arr[x][0] == arr[x][1] && arr[x][1] == arr[x][2]){
            flag = 1;
            break;
        }
        else if(arr[0][x] == arr[1][x] && arr[1][x] == arr[2][x]){
            flag = 1;
            break;
        }
        else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
            flag = 1;
            break;
        }
        else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }
}