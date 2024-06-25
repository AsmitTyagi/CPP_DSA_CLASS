#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int> arr;
    cout<<arr.size();
    
    cout<<arr.capacity();
//insert
arr.push_back(5);
arr.push_back(10);
arr.push_back(15);

//print 
for (int i=0; i <arr.size(); i++){
    cout<<arr[i]<<" ";
}
//remove 
arr.pop_back();
// for (int i=0; i <arr.size(); i++){
//     cout<<arr[i]<<" ";
// }


//taking input
int n ;
 cout<<"enter the value of n "<<endl;
 cin>>n;


vector<int>brr(n, 1);
cout<<"siz of "<<brr.size()<<endl;

for(int i =0; i<arr.size();i++){
    cout<<arr[i]<<" ";
    }



 }