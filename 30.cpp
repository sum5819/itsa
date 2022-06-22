#include<iostream>
using namespace std;  

int main(){
    int month, day;
    cin >> month >> day;
    if(month == 1){
        if(day <= 20){
            cout << "Capricorn" << endl;
        }
        else{
            cout << "Aquarius" << endl;
        }
    }
    if(month == 2){
        if(day <= 18){
            cout << "Aquarius" << endl;
        }
        else{
            cout << "Pisces" << endl;
        }
    }
    if(month == 3){
        if(day <= 20){
            cout << "Pisces" << endl;
        }
        else{
            cout << "Aries" << endl;
        }
    }
    if(month == 4){
        if(day <= 20){
            cout << "Aries" << endl;
        }
        else{
            cout << "Taurus" << endl;
        }
    }
    if(month == 5){
        if(day <= 21){
            cout << "Taurus" << endl;
        }
        else{
            cout << "Gemini" << endl;
        }
    }
    if(month == 6){
        if(day <= 21){
            cout << "Gemini" << endl;
        }
        else{
            cout << "Cancer" << endl;
        }
    }
    if(month == 7){
        if(day <= 22){
            cout << "Cancer" << endl;
        }
        else{
            cout << "Leo" << endl;
        }
    }
    if(month == 8){
        if(day <= 23){
            cout << "Leo" << endl;
        }
        else{
            cout << "Virgo" << endl;
        }
    }
    if(month == 9){
        if(day <= 23){
            cout << "Virgo" << endl;
        }
        else{
            cout << "Libra" << endl;
        }
    }
    if(month == 10){
        if(day <= 23){
            cout << "Libra" << endl;
        }
        else{
            cout << "Scorpio" << endl;
        }
    }
    if(month == 11){
        if(day <= 22){
            cout << "Scorpio" << endl;
        }
        else{
            cout << "Sagittarius" << endl;
        }
    }
    if(month == 12){
        if(day <= 21){
            cout << "Sagittarius" << endl;
        }
        else{
            cout << "Capricorn" << endl;
        }
    }
}