/*inheritance allows us to create a new class (derived? child) from an existing class (base / parent)
- the child class inherits the feature from the parent class and can have the additional features od its own */



// #include<iostream>
// using namespace std;
// class animal{
// public:
// void eat (){
//     cout<<"eating"<<endl;

// }

// };
// class dog : public animal{
//     public:
//     void bark(){
//         cout<<"barking"<<endl;

//     }
// };


// int main(){
//     animal a1;
//     a1.eat();

//     dog d1;
//     d1.eat(.
//     );


// }

//multilevel inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     /*+data*/

// };
// class B: public A
// {
// private:
//     /* data */

// };
// class C : private B{
// public:
// /*data*/
// } ;


//multilevel
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void print(){
//         cout<<"hey";

//     }

    

// };
// class B: public A
// {
// private:
//    void print(){

//    }

// };
// class C : private B{
// public:
// void print(){

// }
// } ;

// int main(){
//     A a1;
//     a1.A::print();
// }



//heirarchical one parent many child 
// class A{

// };
// class B: public A{

// }
// class C : public A{

// }




// using pointer in inheritance

#include<iostream>
using namespace std;
class Base{
    public:
    void print(){
        cout<<"from base"<<endl;

    }

};
class derived : public Base{
    public:
    void print(){
        cout<<"from derived"<<endl;

    }
};
int main(){
    derived d1;
    derived *ptr = & d1;
    ptr->print();
};
