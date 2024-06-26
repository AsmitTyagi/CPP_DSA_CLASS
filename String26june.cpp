 
#include<string>
#include<iostream>
using namespace std;
int getLength(int arr[]){
    int length =0;
    for (int i=0; arr[i]=!'\0';i++){
        length++;
    }
}



int main(){
    // //char arr[]="Hellow";
    // //char arr[]={'h','e','l','l','o','w'};
    // char arr[100];
    // cout<<"enter your name :";
    // // cin>>arr;            this wile only print one word 
    // cin.getline(arr,100);
    // cout<<"your name is :"<<arr<<endl;
    
    //to know the length of string with STL
    string str="hellow";
    cout<<str.length()<<endl;
    cout<<str.append("world")<<endl;
    cout<<str.insert(6," hyy ")<<endl;




}