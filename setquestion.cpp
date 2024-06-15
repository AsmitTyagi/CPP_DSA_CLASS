// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//     set<int> set1 = {1,1,2,2,2,3,3,};
//     cout << "Ascending: ";
//     for (int i : set1){
//         cout << i << " ";
//     }
// }



//by two pointer method ---:

#include<iostream>

using namespace std;

int uniqueElement(int arr[], int size){
    int i =0;
    for (int j =i+1; j<size;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
                return i;
}

int main(){
    int arr[]={1,2,2,2,3,3};
    int k =uniqueElement(arr,6);
    for (int i =0;i<=k;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
