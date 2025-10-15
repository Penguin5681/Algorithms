#include <bits/stdc++.h>

using namespace std;

#define n 20

class Queue {
    int* arr;
    int front, back;

    public:
        Queue() {
            arr = new int[n];
            front = -1; back = -1;
        }

        void push(int x) {
            if (back == n - 1) {
                cout << "Queue Overflow\n";
                return;
            }
            back++;
            arr[back] = x;

            if (front == -1) {
                front++;
            }

        }
        void pop() {
            if (front == -1 or front > back) {
                cout << "Queue Empty\n";
                return;
            }
            front++;
        }

        int peak() {
            if (front == -1 or front > back) {
                cout << "Queue Empty\n";
                return -1;
            }

            return arr[front];
        }

        bool empty() {
            if (front == -1 or front > back) {
                cout << "Queue Empty\n";
                return true;
            }
            return false;
        }
};

signed main(void) {
    Queue q;
    q.push(1); q.push(2); q.push(3);

    cout << q.peak() << '\n';
    q.pop();

    cout << q.peak() << '\n';
    q.pop();

    cout << q.peak() << '\n';
    q.pop();

    cout << q.empty() << '\n';
}