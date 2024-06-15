//encapsulation
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//     int EmpId;
//     double salary;

//     public:
//     void setid(int newId){
//         EmpId=newId;

//     }
// };
// int main(){
//     EmpId e1;
    
//     e1.setId(5)
// }
#include<iostream>
using namespace std;
class Student{
    private:
    string Name;
    int RollNo;
    int Age;
    char Grade;

    public:
    void get( string getName, int getRollNo, int getAge, char getGrade){
        Name = getName;
        RollNo= getRollNo;
        Age= getAge;
        Grade= getGrade;

        cout<<"this is get method"<<endl;
         cout<<Name<<endl;
          cout<<RollNo<<endl;
           cout<<Age<<endl;
            cout<<Grade<<endl;

    }
 void SET( string newName, int NewRollNo, int NewAge, char NewGrade){
        Name = NewAge;
        RollNo= NewAge;
        Age= NewAge;
        Grade= NewAge;
        cout<<"this is set method"<<endl;
         cout<<Name<<endl;
          cout<<RollNo<<endl;
           cout<<Age<<endl;
            cout<<Grade<<endl;
 }
void print()
{
    cout<<Name<<endl;
    cout<<RollNo<<endl;
    cout<<Age<<endl;
     cout<<Grade<<endl;
    

}
};
int main(){
    Student s1;
    s1.get("asmit", 1231, 23, "a");
    s1.print();
    s1.SET("neeraj", 121,34,"d");
    s1.print();
    


}
