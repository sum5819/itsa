#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        string s1, s2;
        int n1[30] = {0};
        int n2[30] = {0};
        int j;
        cin >> s1 >> s2;
        for(int i = s1.length()-1, j = 0; i >= 0; i --){
            n1[j] = s1[i] - '0';
            j ++;
        }
        for(int i = s2.length()-1, j = 0; i >= 0; i --){
            n2[j] = s2[i] - '0';
            j ++;
        }
        for(int i = 0; i < 30; i ++){
            n1[i] = n1[i] + n2[i];
            if(n1[i] > 9){
                n1[i] = n1[i] - 10;
                n1[i+1] ++;
            }
        }
        for(j = 29; j >= 0 && n1[j] == 0; j--){}
        for(int i = j; i >= 0; i --){
            cout << n1[i];
        }
        cout << endl;
    }
}