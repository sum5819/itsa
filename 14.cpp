#include<iostream>
using namespace std;
 
void isPalindrome(string input){
    int i = 0;
    for(i = 0;i < input.size() / 2; i++){
        if(input[i] == input[input.size() - i - 1]){
        }
        else break;
    }
    if(i == input.size() / 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main(){
    string input;
    while(cin >> input){
        isPalindrome(input);
    }
}