//searching a letter in a string
#include<iostream>
#include<string>
using namespace std;
 bool checkString(string str, int n , int i, char key){
    if(i>=n){
        return false;
    }
    if(str[i]==key){
        return true;

    }
    return checkString(str, n,i+1,key);
 }

int main(){
    int i =0;
    string str ="asmi";
    int n =str.length();
    
    char key ='i';
    bool ans = checkString( str, n , i, key);
    cout<<"ans is :"<<ans;
    return 0;

}