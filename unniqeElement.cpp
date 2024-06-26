#include<iostream>
#include<vector>
using namespace std;
int FindUnique(vector<int>arr){
    int ans=0;
    for (int i=0; i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;

}
int main(){
    int n ;
    cout<<" the size of array "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enetr the element "<<endl;
    for (int i=0; i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement = FindUnique(arr);
    cout << "The unique element is " << uniqueElement << endl;
    return 0;
    
}