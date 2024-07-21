#include<iostream>
#include<string.h>
using namespace std;
void ConvertIntoUpper (char arr[]){
    int n = strlen(arr);

    for (int i = 0; i < n ; i++){
        arr[i]= arr[i]-'a'+'A';
    }
}
int main(){
    char arr[100];
    cout<<"Enter the string"<<endl;
     cin>>arr;
    ConvertIntoUpper(arr);
    cout<<"result:"<<arr<<endl;
return 0;

}