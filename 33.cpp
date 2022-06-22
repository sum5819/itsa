#include <iostream> 
#include <iomanip> 
#include <string> 
#include <sstream> 
using namespace std; 
 
int main() { 
    string text; 
    int size = 0; 
    float sum = 0; 
    string num[10000]; 
    float i_num[10000]; 
    while(getline(cin, text)){ 
        size = 0; 
        sum = 0; 
        stringstream ss(text); 
        string word; 
        while (getline(ss, word, ' ')){ 
            num[size] = word; 
            i_num[size] = stod(num[size]); 
            size++; 
        } 
        for(int i = 0;i < size; i++) { 
            sum = sum + i_num[i]; 
        } 
        cout << "Size: " << size << endl; 
        cout << "Average: " << fixed << setprecision(3) << sum / size << endl;  
    } 
    return 0; 
}  