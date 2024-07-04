// it follows LIFO
// it is a linear data structure
// it is a data structure that consists of nodes arranged in a particular order and each node of a
// stack contains a value as well as a reference to the next node.
//  we can not give variable size of an array while compile time
#include <iostream>
#include<stack>
using namespace std;
class Mystack
{
public:
    int *arr;
    int top;
    int size;
    Mystack()
    {
        arr = new int[size];
        top = -1;
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {

            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    void peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    bool isempty(){
        if (top==-1){
            cout<<"empty";
        }
        else{
            cout<<"has something ";

        }
    }
};

int main(){
    // Mystack s;
    // s.size=100;
    // s.push(1);
    // s.push(20);
    // s.peek();
    // s.isempty();

// using STL
stack<int> s;
s.push (1);
s.push (20);
s.push (30);
s.pop();
s.size();
s.top();






    
}


