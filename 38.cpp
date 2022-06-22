#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    int n;
    float summer, non_summer;
    cin >> n;
    if(n <= 120){
        summer = n * 2.1;
        non_summer = n * 2.1;
    }
    else if(n <= 330){
        summer = 120 * 2.1 + (n-120) * 3.02;
        non_summer = 120 * 2.1 + (n-120) * 2.68;
    }
    else if(n <= 500){
        summer = 120 * 2.1 + 210 * 3.02 + (n-330) * 4.39;
        non_summer = 120 * 2.1 + 210 * 2.68+ (n-330) * 3.61;
    }
    else if(n <= 700){
        summer = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + (n-500) * 4.97;
        non_summer = 120 * 2.1 + 210 * 2.68 + 170 * 3.61 + (n-500) * 4.01;
    }
    else{
        summer = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (n-700) * 5.63;
        non_summer =120 * 2.1 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + (n-700) * 4.5;
    }
    cout << "Summer months:" << fixed << setprecision(2) << summer << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << non_summer << endl;
}