#include <bits/stdc++.h>

class node {
    public:
        int data;
        node* next;
        node* previous;

        node(int val) {
            data = val;
            next = NULL;
            previous = NULL;
        }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    if (head != NULL) {
        head->previous = n;
    }

    head = n;
}

void insertAtTail(node* &head, int val) {

    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->previous = temp;
}

void DeleteAtHead(node* head) {
    node* ToDelete = head;
    head = head->next;
    head->previous = NULL;

    delete ToDelete;
}

void DeleteNode(node* &head, int pos) {
    if (pos == 1) {
        DeleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;
        while (temp != NULL and count != pos) {
            temp = temp->next;
            count++;
        }
        temp->previous->next = temp->next;
        if (temp->next != NULL) {
            
            temp->next->previous = temp->previous;
        }

        delete temp;
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
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    display(head);
    insertAtHead(head, 0);
    display(head);

    DeleteNode(head, 2);
    display(head);
}