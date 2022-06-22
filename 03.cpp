#include<iostream>
using namespace std;

int main(){
    int x,y,a;
    cin >> x >> y;
    a = x * x + y * y;
    if(a <= 40000){
        cout << "inside" << endl;
    }
    else{
         cout << "outside" << endl;
    }
}
