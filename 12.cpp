#include<iostream>
using namespace std;

int main(){
    int k;
    int f[100] = {0};
    cin >> k;
    f[0] = 1;
    f[1] = 2;
    for(int i = 2; i <= k; i ++){
        f[i] = f[i - 1] + f[(i / 2)];
    }
    cout << f[k] << endl;
}