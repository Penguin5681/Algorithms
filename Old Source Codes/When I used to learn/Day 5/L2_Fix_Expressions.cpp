#include <bits/stdc++.h>

using namespace std;

// Infix: <operand> <operator> <operand>
// Prefix: <operator> <operand> <operand>
// Postfix: <operand> <operand> <operator> 

int prefixEvaluation(string S) {
    // -+7*45+20
    stack<int> St;
        for (int i = S.length() - 1; i >= 0; --i) {
            if (S[i] >= '0' and S[i] <= '9')
                St.push(S[i] - '0');
            else {
                int op1 = St.top(); St.pop();
                int op2 = St.top(); St.pop();

                switch (S[i]) {
                    case '+': St.push(op1 + op2); break;
                    case '-': St.push(op1 - op2); break;
                    case '*': St.push(op1 * op2); break;
                    case '/': St.push(op1 / op2); break;
                    case '^': St.push(op1 ^ op2); break;
                }
            }
        }
    return St.top();
}

int postfixEvaluation(string S) {
    // 46+2/5*7+
    stack<int> St;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] >= '0' and S[i] <= '9') {
            St.push(S[i] - '0');
        }
        else {
            int op2 = St.top(); St.pop();
            int op1 = St.top(); St.pop();

            switch (S[i]) {
                    case '+': St.push(op1 + op2); break;
                    case '-': St.push(op1 - op2); break;
                    case '*': St.push(op1 * op2); break;
                    case '/': St.push(op1 / op2); break;
                    case '^': St.push(op1 ^ op2); break;
                }
        }
    }
    return St.top();
}

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' or ch == '/') return 2;
    else if (ch == '+' or ch == '-') return 1;
    else return -1;     // No operator found
}

string strREV(string St) {
    string rsl = "";
    for (int i = St.length() - 1; i >= 0; --i)
        rsl += St[i];
    return rsl;     // return strrev(St);
}

string infixToPostfix(string S) {
    stack<char> St;
    string rsl; 
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] >= 'a' and S[i] <= 'z' or S[i] >= 'A' and S[i] <= 'Z')
                rsl += S[i];

            else if (S[i] == '(') 
                St.push(S[i]);
            
            else if (S[i] == ')') {
                while (!St.empty() and St.top() != '(') {
                    rsl += St.top();
                    St.pop();
                }
                if (!St.empty()) St.pop();
            }
            else {
                while (!St.empty() and precedence(St.top()) > precedence(S[i])) {
                    rsl += St.top();
                    St.pop();
                }
                St.push(S[i]);
            }
        }
    while (!St.empty()) {
        rsl += St.top();
        St.pop();
    }

    return rsl;
}

string infixToPrefix(string S) {
    reverse(S.begin(), S.end());
    stack<char> St;
    string rsl; 
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] >= 'a' and S[i] <= 'z' or S[i] >= 'A' and S[i] <= 'Z')
                rsl += S[i];

            else if (S[i] == ')') 
                St.push(S[i]);
            
            else if (S[i] == '(') {
                while (!St.empty() and St.top() != ')') {
                    rsl += St.top();
                    St.pop();
                }
                if (!St.empty()) St.pop();
            }
            else {
                while (!St.empty() and precedence(St.top()) > precedence(S[i])) {
                    rsl += St.top();
                    St.pop();
                }
                St.push(S[i]);
            }
        }
    while (!St.empty()) {
        rsl += St.top();
        St.pop();
    }
    reverse(rsl.begin(), rsl.end());
    return rsl;
}