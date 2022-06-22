#include<iostream>
#include<string>
using namespace std;

char *getword(char *text,char *word){
    char *ptr=text;
    char *qtr=word;
    word[0]=0;
    while(*ptr && *ptr == ','){
        ptr ++;
    }
    while(*ptr && *ptr != ','){
        *qtr++ = *ptr++;
    }
    *qtr = 0;
    if(word[0] == 0)return NULL;
    else return ptr;
}

int main(){
    int input[4];
    int i = 0;
    int total;
    int dollar[3];
    char text[130];
    char word[130];
    char *ptr;
    while(cin >> text){
        ptr = text;
        while(ptr = getword(ptr, word)){
            input[i] = stoi(word);
            i++;
        }
    }
    total = input[1] * 15 + input[2] * 20 + input[3] * 30;
    if(input[0] < total){
        cout << "0" << endl;
    }
    else{
        dollar[2] = (input[0] - total)/50;
        dollar[1] = (input[0] - total - dollar[2] * 50)/5;
        dollar[0] = input[0] - total - dollar[2] * 50 - dollar[1] * 5;
        cout << dollar[0] << "," << dollar[1]<< "," << dollar[2] <<endl;
    }
} 