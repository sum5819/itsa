#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    int height,gender;
    float weight;
    while(cin >> height >> gender){
        if(gender == 1){
            weight = (height - 80) * 0.7;
        }
        else{
            weight = (height - 70) * 0.6;
        }
        cout << fixed << setprecision(1) << weight << endl;
    }
}