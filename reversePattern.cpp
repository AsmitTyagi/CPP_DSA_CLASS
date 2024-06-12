#include <iostream>
using namespace std;
int n;
int main() {
    cout<<"enter a no :"<<endl;
     cin>>n;
     for(int i=n; i>=1;i--){
         for (int j=i-1; j>=0;j--){
             cout<<i+j;
         }
         cout<<endl;
     }

    return 0;
}