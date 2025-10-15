#include <bits/stdc++.h>
#include <stack>

class que{
    std::stack<int> s1;

    public: 
        void push(int x) {
            s1.push(x);
        }

        int pop() {
            if (s1.empty()) {
                std::cout << "Queue is empty\n";
                return -1;
            }
            
            int x = s1.top();
            s1.pop();
            if (s1.empty()) {
                return x;
            }
            int item = pop();
            s1.push(x);
            return item; 
        }
        
        bool is_empty() {
            if (s1.empty()) {
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