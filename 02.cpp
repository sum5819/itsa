#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    double result;
    while(cin >> n){
        result = n * 1.6;
        cout << setiosflags(ios::fixed);
        cout << setprecision(1) << result << endl;
    }
}
