#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float n, max, min;
    cin >> n;
    max = n;
    min = n;
    for(int i = 0; i < 9; i ++){
        cin >> n;
        if(n > max){
            max = n;
        }
        if(n < min){
            min = n;
        }
    }
    cout << setiosflags(ios::fixed);
    cout << "maximum:" << setprecision(2) << max << endl;
    cout << "minimum:" << setprecision(2) << min << endl;
}