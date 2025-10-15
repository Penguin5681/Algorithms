#include <bits/stdc++.h>
#include <stack>
#define n 10

using std::stack;

class Queue {
    int* arr;
    int front; int back;

    public:
        Queue() {
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void push_queue(int x) {
            if (back == n - 1) {
                std::cout << "Queue Overflow :|\n";
                return;
            }
            back++;
            arr[back] = x;
            if (front == -1) {
                front++;
            }
        }

        void POP() {
            if (front == -1 and front > back) {
                std::cout << "Queue is empty";
                return;
            }
            front++;
        }

        int PEEK() {
            if (front == -1 and front > back) {
                return -1;
            }
            return arr[front];
        }

        bool isEmpty() {
            if (front == -1 and front > back) {
                return true;
            }
            return false;
        }

};

class Stack {
    private:
        int size;
        std::queue<int> q1;
        std::queue<int> q2;

    public:
        void push(int val) {
            q2.push(val); size++;
                while (q1.empty() == false) {
                    q2.push(q1.front());
                    q1.pop();
                }
            std::queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }             

        void pop() {
            q1.pop();
            size--;
        }   

        int top() {
            return q1.front();
        }

        int SIZE() {
            return size;
        }
};

signed main(void) {
    Stack st;
        for (int i = 1; i < 11; i++) {
            st.push(i);
        }
        for (int i = 1; i < 11; i++) {
            std::cout << st.top() << " ";
            st.pop();
        }
}