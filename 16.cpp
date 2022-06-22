#include<iostream>
using namespace std;

int numcnt(string &s1, int idx, string s2){
    int a = 0;
    if(idx > s2.length()) return a = 0;
    for(int i = 0; i < s1.length(); i++){
        if(s2[i+idx] == s1[i]) continue;
        else return a += numcnt(s1, idx + 1, s2);
    }
    a ++; 
    return a += numcnt(s1, idx + 1, s2);
}

int main(){
    string s1, s2;
    int cnt = 0;
    cin >> s1 >> s2;
    cout << numcnt(s1, 0, s2) << endl; 
}