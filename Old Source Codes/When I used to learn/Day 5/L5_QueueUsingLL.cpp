#include <bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node* next;
    
    node(int value) {
        data = value;
        next == NULL;
    }
};

class queueLL {
    node* front;
    node* back;

    public:
        queueLL() {
            front = NULL;
            back = NULL;
        }

        void enqueue(int value) {
            node* newNode = new node(value);
            if (front == NULL) {
                front = newNode;
                back = newNode;
                return;
            }
            back->next = newNode;
            back = newNode;
        }

        void dequeue() {
            if (front == NULL) {
                cout << "\nQueue UnderFlow"; return;
            }

            node* toDelete = front;
            front = front->next;
            delete toDelete; 
        }

        int peek() {
            if (front == NULL) {
               return -1;
            }
            return front->data;
        }

        bool isEmpty() {
            if (front == NULL) return true;
            return false;
        }
};

void queue_LL() {
    queueLL Q;
    int A[] = {1, 2, 3, 4, 5};
    for (int i : A) Q.enqueue(i);
    cout << Q.peek() << '\n';
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    cout << Q.peek() << endl;
    cout << Q.isEmpty();
}