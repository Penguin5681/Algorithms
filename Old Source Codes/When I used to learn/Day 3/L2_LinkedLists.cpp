#include <bits/stdc++.h>

using namespace std;

// Linked Lists are multiple blocks of memory linked with each other
// Arrays are single block of memory with partitions

class node {
    public:
        int data;
        node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};


void insertAtHead(node* &head, int value) {
    node* newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &head, int value) {
    node* newNode = new node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp=temp->next;
    }
    temp->next = newNode;
}

bool searchLL(node* head, int key) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

void deleteNthNode(node* &head, int value) {
    if (head == NULL) return;

    // Deletes node at beginning
    if (head->data == value) {
        node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    // Deletes any given node (even if it's the last node)
    node* temp = head;
    while (temp->next->data != value) {
        temp = temp->next;
    }

    node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

node* reverseLL(node* &head) {
    node* previous = NULL;
    node* current = head;
    node* next;
        while (current != NULL) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
    return previous;
}

node* reverseK(node* &head, int K) {
    node* previous = NULL;
    node* current = head;
    node* next;
    int count = 0;
        while (current != NULL and count < K) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            count++;
        }
        if (next != NULL)
            head->next = reverseK(next, K); 
    return previous;
}

// Cycle : When nextPTR of two nodes points
// towards a same node, a cycle is formed

bool isCyclic(node* &head) {
    // Hare and Tortoise Algorithm
    node* fast = head;     // Hare
    node* slow = head;     // Tortoise

    while (fast != NULL and fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) return true;
    }
    return false;
}

void createCycle(node* &head, int position) {
    node* temp = head;
    node* startNode;
    int count = 1;
        while (temp->next != NULL) {
            if (count == position) 
               startNode = temp;
            temp = temp->next;
            count++; 
        }
        temp->next = startNode;
}

void removeCycle(node* &head) {
    node* fast = head;
    node* slow = head;
        do {
            slow = slow->next;
            fast = fast->next->next;
        }
            while (slow != fast);
    fast = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    slow->next = NULL;
}

void displayLL(node* head) {
    if (head == NULL) {
        cout << "NULL";
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}