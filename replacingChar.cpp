#include<iostream>
#include<string.h>
using namespace std;


char tonine(char nine) {
    if (nine == ' ') return '@';
    else return nine;
}

int main() {
    string str = "Hello, World!";
    for (char& c : str) {
        c = tonine(c);
    }
    cout << str << endl; // this will conver all the blank spaces to @
    return 0;
}
