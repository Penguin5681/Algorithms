#include <bits/stdc++.h>

class node {
    public:
        int data;
        node* next;

            node(int val) {
                data = val;
                next = NULL;
            }
};

class queue {
    node* front;
    node* back;

    public:
        queue() {
            front = NULL;
            back = NULL;
        }

    void push(int x) {
        node* n = new node(x);
            if (front == NULL) {
                back = n;
                front = n;
                return;
            }
            back->next = n;
            back = n;
    }
    
    void pop() {
        if (front == NULL) {
            std::cout << "Queue Underflow" << '\n';
            return;
        }
        node* to_delete = front;
        front = front->next;

        delete to_delete;
    }

    int peek() {
        if (front == NULL) {
            std::cout << "Queue Empty" << '\n';
            return -1;
        }
        return front->data;
    }

    bool empty() {
        if (front == NULL) {
            return true;
        }
        return false;
    }
};

signed main(void) {
    queue q;
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 0; i < 9; i++) {
            q.push(Arr[i]);
        }
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.peek();
        q.pop();
        std::cout << q.empty();

}