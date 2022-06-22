#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

int isPrime(int n){
    if(n == 1) return FALSE;
    else{
        for(int i = 2; i * i <= n; i ++){
            if(n % i == 0) return FALSE;
        }
        return TRUE;
    }
}

int main(){
    int num;
    cin >> num;
    if(isPrime(num)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
