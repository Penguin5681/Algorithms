#include <bits/stdc++.h>

class node {
    public:
        int data;
        node* next;

        node(int val) {             // Default Constructor
            data = val;
            next = NULL;  
        }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n; 
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
        if (head == NULL) {
            head = n;
            return;
        }
    node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << '\n';
}

bool search(node* head, int key) {
    node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
                return false;
}

signed main(void) {

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    // insertAtHead(head, 9);
    display(head);
    // std::cout << search(head, 10) << '\n';
    // 0 if false; 1 if true
}