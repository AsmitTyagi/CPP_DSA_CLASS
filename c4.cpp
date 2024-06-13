//parameterise constructor
#include<iostream>
using namespace std;


class Employe{
public:
    int EmpId;

    //default const
    Employe(){
        cout<<"this is a default const"<<endl;
        

    }
// parameterise const
Employe(int id ){
    EmpId=id;
    cout<<"employe id is "<<id<<endl;
}

// copy const
Employe (Employe &e1 ){
    id = this->EmpId;

}



void display(){
    cout<<"employ id is :"<<EmpId;

}
};

int main(){
Employe e1 (20);



return 0;

}


