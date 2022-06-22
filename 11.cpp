#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int element[1000][1000];
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++){
            cin >> element[i][j];
        }
    }
    for(int j = 0; j < col; j ++){
        for(int i = 0; i < row - 1; i ++){
            cout << element[i][j] << " ";
        }
        cout << element[row - 1][j] << endl; 
    }
}