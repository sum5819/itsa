#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int start[30] = {0};
    int end[30] = {0};
    int time[25] = {0};
    for(int i = 0; i < n; i ++){
        cin >> start[i] >> end[i];
    }
    for(int i = 0; i < n; i ++){
        for(int j = start[i]; j < end[i]; j ++){
            time[j] ++;
        }
    }
    int max = time[0];
    for(int i = 0; i < 25; i ++){
        if(time[i] > max){
            max = time[i];
        }
    }
    cout << max << endl;
}