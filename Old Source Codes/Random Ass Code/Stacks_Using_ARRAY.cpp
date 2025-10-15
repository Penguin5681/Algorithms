#include <bits/stdc++.h>

#define n 100

class Stack {
    int* array;
    int top;
    
    public: 
    Stack() {
        array = new int [n];
        top = -1;
    }

    void Push(int x) {
        if (top == n - 1) {
            std::cout << "Stack Overflow\n";
            return;
        }
        top++;
        array[top] = x;
    }
    
    void pop() {
        if (top == -1) {
            std::cout << "N0 elements to pop\n";
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            std::cout << "No elements in stack";
            return -1;
        }

        return array[top];  
    }

    bool empty() {
        return top == -1;
    }

};

signed main(void) {
    Stack st;
    st.Push(1); st.Push(2); st.Push(3);
    std::cout << st.Top() << '\n';
    st.pop();
    std::cout << st.Top() << '\n';
    st.pop();
    st.pop();
    st.pop();

    std::cout << st.empty() << '\n';
}