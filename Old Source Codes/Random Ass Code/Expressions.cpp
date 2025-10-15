#include <bits/stdc++.h>
#include <stack>
#include <cmath>

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

std::string InfixToPostFix(std::string s) {
    std::stack<char> st; std::string result;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z' or s[i] >= '0' and s[i] <= '9') {
                result += s[i];
            }
            else if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                while (!st.empty() and st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                while(!st.empty() and Precedence(s[i]) < Precedence(st.top())) {
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
    return result;
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

int PostfixSolve(std::string s) {
    std::stack<int> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' and s[i] <= '9') {
                st.push(s[i] - '0');
            }
            else {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();

                switch(s[i]) {
                    case '+': st.push(op1 + op2); break;
                    case '-': st.push(op1 - op2); break;
                    case '*': st.push(op1 * op2); break;
                    case '/': st.push(op1 / op2); break;
                    case '^': st.push(pow(op1, op2)); break;
                }
            }
        }
        return st.top();
}

bool isOperand(char ch) {
    return isdigit(ch);
}

int PrefixSolve(std::string s) {
    std::stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (isOperand(s[i])) {
            st.push(s[i] - '0');
        }
        else {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '/': st.push(op1 / op2); break;
                case '^': st.push(pow(op1, op2)); break;
                case '*': st.push(op1 * op2); break;
            }
        }
    }
    return st.top();
}

signed main(void) {
    std::cout << InfixToPostFix("((a+t)*((b+(a+c))^(c+d)))");
}