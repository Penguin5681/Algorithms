#include <bits/stdc++.h>

using namespace std;

class solution {
    public:
        bool redundantParenthesis(string s) {
            stack<char> St;
            for (auto ch : s) {
                if (ch == ')') {
                    char top = St.top();
                    St.pop();

                    bool flag = true;
                    while (!St.empty() and top != '(') {
                        if (top == '+' or top == '-' or top == '/' or top == '*') 
                            flag = false;
                        top = St.top();
                        St.pop();
                    }
                    if (flag) return true;
                }
                else St.push(ch);
            }
            return false;
        }
};

signed main(void) {
    solution s;
    if (s.redundantParenthesis("(a + b + c)")) cout << "YES";
    else cout << "NO";
}