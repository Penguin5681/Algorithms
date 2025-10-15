#include <bits/stdc++.h>
#include <stack>

class que{
    std::stack<int> s1;
    std::stack<int> s2;

    public: 
        void push(int x) {
            s1.push(x);
        }

        int pop() {
            if (s1.empty() and s2.empty()) {
                std::cout << "Queue is empty\n";
                return -1;
            }
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int top_val = s2.top();
            s2.pop();
            return top_val;
        }
        
        bool is_empty() {
            if (s1.empty() and s2.empty()) {
                return true;
            }
            return false;
        }
};

signed main(void) {
    que q;
    for (int i = 0; i < 5; i++){
        q.push(i);
    }
    std::cout << q.pop() << '\n';
    std::cout << q.pop() << '\n';
    std::cout << q.pop() << '\n';
    std::cout << q.pop() << '\n';
    std::cout << q.pop() << '\n';
    std::cout << q.is_empty() << '\n';
}