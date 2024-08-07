// int pointer array
#include <iostream>
using namespace std;

int main() {
//   int arr[10];
//   cout<<&arr<<endl;
        
//   int *p=arr;
//   cout<<(&p)<<endl;
//   cout<<p<<endl;
  

  //character array
  char name [10]="Asmit ";
  char * nnn=&name[0];
    cout<<&name <<endl;
    cout<<name <<endl;
    cout<<(name+3) <<endl;
    cout<<&nnn <<endl;
    cout<<nnn <<endl;
    cout<<*nnn <<endl;
    cout<<(nnn+3) <<endl;

    return 0;
}