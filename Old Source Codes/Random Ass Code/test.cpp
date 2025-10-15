#include <bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node* next;
    
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAthead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void displayLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    int A[10];
    node* head = NULL;
        for (int i = 0; i < 11; ++i, insertAthead(head, i));
    displayLL(head);
}