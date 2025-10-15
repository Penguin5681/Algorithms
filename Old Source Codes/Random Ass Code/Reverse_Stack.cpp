#include <bits/stdc++.h>
#include <stack>

void insertAtBottom(std::stack<int> &st, int el) {
    if (st.empty()) {
        st.push(el);
        return;
    }

    int top_ele = st.top();
    st.pop();
    insertAtBottom(st, el);

    st.push(top_ele);
}

void Reverse_Stack(std::stack<int> &st) {
    if (st.empty()) {
        return;
    }

    int element = st.top();
    st.pop();
    Reverse_Stack(st);
    insertAtBottom(st, element);
}

signed main(void) {

    std::stack<int> st;
    
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        for (int i = 0; i < 10; i++) {
            st.push(A[i]);
        }

    Reverse_Stack(st);  
        while(!st.empty()) {
            std::cout << st.top() << ' ';
            st.pop();
        }

}