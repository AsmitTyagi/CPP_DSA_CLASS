#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr, int n,int i){
    if(i==n-1){
        return true;

    }
    if(arr[i+1]<arr[i])
    return false;
    return checkSorted(arr,n,i+1);
}


int main(){

    vector<int>arr={1,2,3,4};
    int n =arr.size();
    int i=0;
    bool isSorted=checkSorted(arr, n , i);
    if(isSorted){
        cout<<"The array is sorted"<<endl;

    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
}