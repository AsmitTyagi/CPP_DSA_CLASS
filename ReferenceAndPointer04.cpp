#include <iostream>
using namespace std;
int main(){

    int var =5;
    int *ptr =&var;

    int **ptr2=&ptr;//double pointer

    cout<<var <<endl;//value of var
    cout<<&var<<endl;//address of var
    cout<<ptr<<endl;//add of var
    cout<<*ptr<<endl;//value of var where ptr is pointing at
    cout<<&ptr<<endl;//add of pointr

    //double pointer
    cout<<ptr2<<endl;//it will sow the memory add of ptr1 

    

    return 0;


}

