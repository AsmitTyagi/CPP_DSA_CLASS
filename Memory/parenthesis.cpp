#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s ){
    stack<char> st;
    for (int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);

        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']'){
            if(st.empty()&& st.top() == '('){
                st.pop();

            }
            else{
                break;
            }
            else if (s[i]==)
    }
}
int main(){

}
