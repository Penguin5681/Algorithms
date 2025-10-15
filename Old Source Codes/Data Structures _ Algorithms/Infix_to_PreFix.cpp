#include <bits/stdc++.h>
#include <cmath>
#include <stack>

int Precedence(char ch) {
    if (ch == '^') {
        return 3;
    }
    else if (ch == '*' or ch == '/') {
        return 2;
    }
    else if (ch == '+' or ch == '-') {
        return 1;
    }
    else return -1;
}

std::string InfixToPrefix(std::string s) {
    std::reverse(s.begin(), s.end());
    std::stack<char> st;
    std::string result;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z' or s[i] >= '0' and s[i] <= '9') {
                result += s[i];
            }
            else if (s[i] == ')') {
                st.push(s[i]);
            }
            else if (s[i] == '(') {
                while (!st.empty() and st.top() != ')') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                while (!st.empty() and Precedence(st.top()) >= Precedence(s[i])) {
                    result += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        std::reverse(result.begin(), result.end());
        return result;
}

signed main(void) {
    std::cout << InfixToPrefix("((A+B)*C-(D-E)^(F+G))");
}