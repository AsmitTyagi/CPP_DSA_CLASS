#include<iostream>
using namespace std;
int main(){
    int  arr[10];
    cout<<"enter value"<<endl;
    for(int i =0; i<10;i++){
        cin>>arr[i];
    }
cout<<"printed values"<<endl;
for(int i =0; i<10;i++){
        cout<<arr[i]*2<<" ";
    }

}