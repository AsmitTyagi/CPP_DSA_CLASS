//array must be sorted
//it works by repeatedly dividing the search interval in half until the target value is found or the interval is empty.
// The search interval is halved by comparing the target element with the middle value of the search space.

#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target ){
    int start=0;
    int end = size-1;
    int mid= start/2 +(start+end)/2;
    while (start<end){
        int element =arr[mid];
        if (element==target)
{
    return mid;

}
else if(target< element ){
     end =mid -1;

}
else{
    start=mid+1;

}
mid = start/2+ (end- start/2);

    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size= 9;
    int target = 9;
  int indexoftarget= binarySearch(arr, size, target);
  if (indexoftarget==-1){
    cout<<"element not found"<<endl;
  }
  else{
    cout<<"element found at index "<<indexoftarget<<endl;


}
}