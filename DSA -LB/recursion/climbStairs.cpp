#include<iostream>
using namespace std;
 int climbStairs(int n ){
    if(n==1||n==0){
        return 1;

    }
    int ans= climbStairs(n-1)+climbStairs(n-2);
    return ans;

 }
 int main(){
    int n ;
    cout<<"enetr the value of n "<<endl;
    cin>>n;
    int ans= climbStairs(n);
    cout<<"no of ways to reach "<<n<<"stairs ar:"<<ans;
    return 0;

 }
 //simillar to fibonnaci series
 