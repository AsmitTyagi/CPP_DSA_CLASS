#include <iostream>
using namespace std;
void printArray(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}
int main()
{
    // int  n, i;
    // cout<<"enter size";
    //  cin>>n ;

    // int arr[n];
    // cout<<"enter elements";               //taking value from user

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"elements are";
    // printArray(arr, n, 0);
    //  return 0;



    int n, i;
    n = 5;
    i = 0;

    int arr[n] = {1, 2, 3, 4, 5};
    cout << "elements are";

    printArray(arr, n, 0);
    return 0;
}