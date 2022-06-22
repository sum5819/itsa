#include<iostream>
using namespace std;

int main(){
    int month;
    cin >> month;
    if(month == 1 || month == 2 || month == 12){
        cout << "Winter" << endl;
    }
    else if(month <= 5){
        cout << "Spring" << endl;
    }
    else if(month <= 8){
        cout << "Summer" << endl;
    }
    else{
        cout << "Autumn" << endl;
    }
}
