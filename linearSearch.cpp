#include<iostream>
using namespace std;
 bool found(int arr[], int key , int size){
    for (int i=0; i<size; i++){
        if(arr[i]==key)
        return true;

    }
    return false;

 }

 int main (){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = 9;
    cout<<"enter the key "<<endl;
    int key ;
    cin>>key;
    if(found(arr,key,size)){
        cout<<"found"<<endl;
 }
 else{
    cout<<"not found"<<endl;
 }
 return 0;

 }