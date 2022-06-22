#include<iostream>
using namespace std;

void sort(int *a){
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 2 - i;j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main(){
    int n;
    int score[3];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> score[0] >> score[1] >> score[2];
        sort(score);
        if(score[0] >= 60){
            cout << "P" << endl;
        }
        else if(score[0] < 60 && score[1] >= 60 && score[0] + score[1] + score[2] >= 220){
            cout << "P" << endl;
        }
        else if(score[0] < 60 && score[1] >= 60 && score[0] + score[1] + score[2] < 220){
            cout << "M" << endl;
        }
        else if(score[1] < 60 && score[2] >= 80){
            cout << "M" << endl;
        }
        else{
            cout << "F" << endl;
        }
    }
}