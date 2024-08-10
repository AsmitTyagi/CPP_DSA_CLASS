#include <iostream>
#include <limits.h>
using namespace std;
// void findMax(int arr[], int n, int& maxi, int i) // pass bby reference krna pdega kyuki function cdallimg krrr rahe hai otherwse copy banege and maxi ko int min ke value allot ho jaige 
// {
//     if (i >= n)
//     {
//         return ;
//     }
//     if (arr[i] > maxi)
//     {
//         maxi = arr[i];
//     }
//     findMax(arr, n,  maxi,i+1);
// }


void findMINI(int arr[], int n, int& mini, int i) // pass bby reference krna pdega kyuki function cdallimg krrr rahe hai otherwse copy banege and maxi ko int min ke value allot ho jaige 
{
    if (i >= n)
    {
        return ;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    findMINI(arr, n,  mini,i+1);
}
int main()
{
    int arr[] = {12, 20, 30};
    int n = 3;
   
    int mini = INT_MAX;
     int i=0;


    findMINI(arr, n, mini, i);
    cout << "minimum no is  " << mini;

    return 0;
}