//1.array must be sorted

#include<iostream>
using namespace std;
bool binarySearch(int arr[],int size, int key){
    int start=0;
    int end =size-1;
    int mid= (start+end)/2;
   
    while (start<=end){
        if (arr[mid]==key){
            return true;

        }
        if (key>arr[mid]){
            //goto right part
            start=mid+1;
        }
        else{
            //goto end part
            end=mid-1;

        }
        mid =(start+end)/2;

    }
    return false;

}
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    bool result = binarySearch(arr, 6, 4);
    cout << (result ? "Key found" : "Key not found") << endl;
    return 0;
}