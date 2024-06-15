//pairsum

#include <iostream>
using namespace std;
int pairsum(int arr[], int size, int target)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 cout << arr[i] << " " << arr[j] << endl;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {3, 2, 5, 10, 1, 7};
//     pairsum(arr, 6, 17);
// }


// another approch 
{
    sort (arr[0], arr[size-1]);
    int i =0;
    int j=size-1;
    while (i<=j){
        int sum =arr[i]+ arr[j];
        if (sum==target)return "Y";
        else if (sum<target)i++;
        else j--;

    }
    return "N";
}
int main(){
    int arr[]={1;1;2;2;2;2;3;3};
    int k =uniqueElement(arr ,7);
    for(int  i=0;i<=k;i++){
        cout<<arr[i]<<" ";

    }

}
//Q.subarray sum??

