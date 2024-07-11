//  to convert char to int we divide it by 0 
//prefix notation (polish notation)right to left 
// postfix notation (reverse polish notation ) left to right 


#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int prefixEval(string s) {
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0'); // Convert char to int
        } else {
            if (st.empty()) return -1; // Error handling for empty stack
            int op1 = st.top();
            st.pop();
            if (st.empty()) return -1; // Error handling for empty stack
            int op2 = st.top();
            st.pop();
            switch (s[i]) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                default:
                    return -1; // Error handling for invalid operator
            }
        }
    }
    return st.top();
}

int main() {
    string s;
    cin >> s;
    cout << prefixEval(s);
    return 0;
}
