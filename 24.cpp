#include<iostream>
using namespace std;

int main(){
    long double r;
    unsigned long long n,p;
    cin >> r >> n >> p;
    long double sum = 0;
    unsigned long long s;
    for(unsigned long long i = 0; i < n; i ++){
        sum += p;
        sum = sum * (1 + r);
    }
    s = (unsigned long long)sum;
    cout << s <<endl;
}