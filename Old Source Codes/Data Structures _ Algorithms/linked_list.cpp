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

void insertAThead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertATtail(node* &head, int val) {
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
        std::cout << "NULL" << std::endl;
}

signed main(void) {

    node* head = NULL;
        for (int i = 0; i < 11; ++i) {
            insertATtail(head, i);
        }
    display(head);
}