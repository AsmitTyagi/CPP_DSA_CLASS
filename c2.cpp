#include<iostream>
using namespace std;


/*   function calling and declaraton
void myfunc(){
cout<<"2"<<endl;
}

// first declare before calling the function in int main cant do it otherwise
void myfunc2(){
myfunc();
cout<<"4"<<endl;
}
*/


/*

string print(string name , int age , int height ){
cout<<"my name :"<<name <<"age "<<age<<"height"<<height<<endl;
}
*/


void factorial (int n ){
    int fact =1;
    for (int i=1, i<=n,i++){
            fact =fact *i;
    }
cout<<fact;


}

int main(){

factorial(3);

}




