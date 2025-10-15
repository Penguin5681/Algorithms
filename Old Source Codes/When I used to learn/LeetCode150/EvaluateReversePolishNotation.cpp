#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        string postFixExp = "";
        for (const auto it : tokens)
            postFixExp += it;
        
        for (int i = 0; i < postFixExp.length(); ++i) {
            if (postFixExp[i] >= '0' and postFixExp[i] <= '9') 
                st.push(postFixExp[i] - '0');
            else {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();

                switch(postFixExp[i]) {
                    case '+': st.push(op1 + op2); break;
                    case '-': st.push(op1 - op2); break;
                    case '*': st.push(op1 * op2); break;
                    case '/': st.push(op1 / op2); break;
                }
            }
        }
        return st.top();
    }
};

signed main(void) {}