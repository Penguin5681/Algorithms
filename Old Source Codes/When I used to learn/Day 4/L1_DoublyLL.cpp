// #include "F:\To Do\Day 3\L2_LinkedLists.cpp"
#include <bits/stdc++.h>

using namespace std;

// Doubly Linked Lists:
// A doubly linked list is a type of linked list where each node 
// contains a reference or pointer to both the next node and the 
// previous node in the sequence

class node {
    public:
        node* previous;
        int data;
        node* next;
    
    node(int value) {
        data = value;
        previous = NULL;
        next = NULL;
    }
};

void DL_insertAtHead(node* &head, int value) {
    node* newNode = new node(value);
    newNode->next = head;
    if (head != NULL)
        head->previous = newNode;
    head = newNode;
}

void DL_insertAtTail(node* &head, int value) {
    node* newNode = new node(value);
        if (head == NULL) {
            DL_insertAtHead(head, value); return;
            // head = newNode;
            // newNode->previous = NULL;
            // newNode->next = NULL;
        }
    node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
    temp->next = newNode;
    newNode->previous=temp;
}

void DL_deleteFtNode(node* &head) {
        node* toDelete = head;
        head = head->next;
        head->previous = NULL;
        delete toDelete;
} 

void DL_deleteNode(node* &head, int position) {
    if (position == 1) 
        DL_deleteFtNode(head);    
    node* temp = head; 
    int count = 1;
        while (temp != NULL and count != position) {
            temp = temp->next;
            count++;
        }
    temp->previous->next = temp->next;
    if (temp->next != NULL)
        temp->next->previous = temp->previous;

    delete temp;
}



void displayDLL(node* head) {
    node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
}