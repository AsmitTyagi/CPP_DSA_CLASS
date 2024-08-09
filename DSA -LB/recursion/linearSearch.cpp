#include<iostream>
using namespace std;
int linearSearch(int arr[], int key, int n)
{
    if(n==0){
        return -1;


    }
    else if(arr[n-1]==key){
        return n-1;

    }
   return linearSearch(arr, key, n-1);

}
int main(){
    int n, key ;
    cout<<"enter the size of the array you desire"<<endl;
    cin>>n;


    int arr[n];
    cout<<"enter the element in the array";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }


    cout<<"enter the key you want to search ";
    cin>>key;

    int result= linearSearch(arr, key , n );
    if(result==-1){
        cout<<key<<"was not found"<<endl;
}
else{
    cout<<key<<"was found at index "<<result<<endl;

}
return 0;
}