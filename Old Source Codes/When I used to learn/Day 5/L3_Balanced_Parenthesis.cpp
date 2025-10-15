#include <bits/stdc++.h>

using namespace std;

// Balanced Parenthesis = {[()]}, [{()}]

bool isBalanced(string s) {
    stack<char> St;
    bool flag = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '{' or s[i] == '(' or s[i] == '[') {
                St.push(s[i]);
            }
            else if (s[i] == ')') {
                if (!St.empty() and St.top() == '(') {
                    St.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == '}') {
                if (!St.empty() and St.top() == '{') {
                    St.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == ']') {
                if (!St.empty() and St.top() == '[') {
                    St.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        if (!St.empty()) {
            return false;
        }
        return flag;
}