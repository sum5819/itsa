#include<iostream>
using namespace std;

int main(){
    string line;
    int alphaCnt[26] = {0};
    int idx;
    int state = 0;
    getline(cin, line);
    int cnt = 0;
        
    for(int i = 0; i < line.length(); i ++){
        if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
            if(line[i] >= 'A' && line[i] <= 'Z'){
                idx = line[i] - 'A';
                alphaCnt[idx] += 1;
            }
            else{
                idx = line[i] - 'a';
                alphaCnt[idx] += 1;
            }
            state = 1;
        }
        if(line[i] == ' '){
            if(state == 1){
                state = 0;
                cnt ++;
            }
        }
    }
    if(state == 1){
        cnt++;
    }
    cout << cnt << endl;
    for(int i = 0; i < 26; i ++){
        if(alphaCnt[i] != 0){
            cout << (char)('a' + i) << " : " << alphaCnt[i] << endl;
        }
    }
}