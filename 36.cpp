#include<iostream>
using namespace std;

int main(){
    int year;
    int flag = 0;
    cin >> year;
    if(year % 4 == 0){
        flag = 1;
    }
    if(year % 100 == 0){
        flag = 0;
    }
    if(year % 400 == 0){
        flag = 1;
    }
    if(flag == 0){
        cout << "Common Year" <<endl;
    }
    if(flag == 1){
        cout << "Bissextile Year" << endl;
    }
}