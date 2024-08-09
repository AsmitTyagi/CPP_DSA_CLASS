#include<iostream>
using namespace std;
long long fact(int n ){
    if(n==0||n==1){
        return 1;

    }
    else{
        return n*fact(n-1);
        }
}
int main(){
    long long n;
    
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"factorial is "<<fact(n)<<endl;
    return 0;
    

}