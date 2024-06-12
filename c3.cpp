
/*class and object declaration*/
// #include <iostream>
// using namespace std;
// class employ{
//     public:
//      int salary ;
//      int exp ;
//      string name ;
//      string showSalary(){
//      cout<<"salaray is " <<salary;
//     }
// };
// int main (){
//     employ emp1;

//      emp1.exp= 10 ;
//      emp1.salary = 10000;
//      emp1.name = "asmit ";
//      emp1.showSalary();
//      return 0;

// }



#include <iostream>
using namespace std;
class employee{
    public:
    employee(){
    cout<<"constructor called "<<endl;
}
};
int main(){
    employee e1;
    employee e2;

}

//A constructor is a special function in object-oriented programming (OOP) that creates and initializes an object instance of a class. It's automatically called whenever a class is declared and has the same name as the class. Constructors are used to prepare a new object for use, often accepting arguments that the constructor uses to set required member variables. 




