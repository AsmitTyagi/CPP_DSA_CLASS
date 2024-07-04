#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseSrtring (string s){
    stack<string> st;
    for (int i=0; i<s.size();i++){
        string word=" ";
        while (s[i] != ' '&&i<s.length()){
            word+=s[i];
            i++;
            
        }
      st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }

    
}
int main(){
    reverseSrtring(" hellow my name is khan and i am not a terrorist");
    return 0;

}