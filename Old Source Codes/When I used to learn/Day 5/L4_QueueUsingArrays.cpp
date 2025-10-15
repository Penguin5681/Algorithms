#include <bits/stdc++.h>

using namespace std;
const int n = 100;

// Queues using arrays

class queues {
    int* arr;
    int front;
    int back;

    public:
        queues() {
            arr = new int[n];
            front = back = -1;
        }

        void enqueue(int value) {
            if (back == n - 1) {
                cout << "Queue Overflow";
                return;
            }
            back++;
            arr[back] = value;

            if (front == -1) front++;
        }

        void dequeue() {
            if (front == -1 or front > back) {
                cout << "Queue Empty";
                return;
            }
            front++;
        }

        int peek() {
            if (front == -1 or front > back) {
                return -1;
            }
            return arr[front];
        }

        bool isEmpty() {
            return front == -1 or front > back;
        }
        
};

void QUEUE() {
    queues Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    cout << Q.peek() << '\n';
    if (Q.isEmpty()) cout << "Queue Empty";
    else cout << "Queue Not Empty";
}