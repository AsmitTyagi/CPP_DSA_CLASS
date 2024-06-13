#include <iostream>
using namespace std;
int main(){

    int var =5;
    int *ptr =&var;

    int **ptr2=&ptr;//double pointer

    int ***ptr3 =NULL;// null pointer 

    cout<<var <<endl;//value of var
    cout<<&var<<endl;//address of var
    cout<<ptr<<endl;//add of var
    cout<<*ptr<<endl;//value of var where ptr is pointing at
    cout<<&ptr<<endl;//add of pointr

    //double pointer
    cout<<ptr2<<endl;//it will sow the memory add of ptr1 

    cout<<ptr3<<endl; // showing null pointer

    //pointer which are earlieer assingned and then then variable are  delleted then thoses pointer will give garbage value and thesepointers are called dazzling pointer thsi result in memory leak
    
/*types of pointer

1.Null pointer:
A null pointer is a pointer that points to nothing. It is often used to indicate that a pointer is not initialized or that it does not point to a valid object. In C++, the null pointer is represented by the keyword nullptr.

2.Dangling pointer:
A dangling pointer is a pointer that points to an object that has been deleted or destroyed. Dangling pointers can cause unexpected program behavior and bugs.

3.Void pointer:
A void pointer is a pointer that can point to any type of data. Void pointers are often used to pass data between functions or to store data in a generic way.
*/

    

    return 0;


}

