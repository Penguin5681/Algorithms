#include <bits/stdc++.h>

class node {                                // Node Definition
    public:
        int data;
        node* next;

        node(int val) {                     // Default Constructor
            data = val;
            next = NULL;  
        }
};

void insertAtHead(node* &head, int val) {           // Inserts a node at the beginning;
    node* n = new node(val);
    n->next = head;
    head = n; 
}

void insertAtTail(node* &head, int val) {           // Inserts a node at the end;
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

void display(node* head) {                      // To display the linked list
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << '\n';
}

node* reverse_k_nodes(node* &head, int k) {              // To reverse K nodes;
    node* previous = NULL;
    node* current = head;
    node* next;

    int count = 0;
        while (current != NULL and count < k) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            count++;
        }
        if (next != NULL) {
            head->next = reverse_k_nodes(next, k);
        }
        return previous;
}

bool search(node* head, int key) {          // Search function
    node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
                return false;
}

void deleteAtHead(node* &head) {            // Deletes the node at the beginning 
    node* to_delete = head;
    head = head->next;

    delete to_delete;
}

void deleteNode(node* &head, int val) {         // Deletes any given node

    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
        while(temp->next->data != val) {
            temp = temp->next;
        }
        node* to_delete = temp->next;
        temp->next = temp->next->next;

        delete to_delete;
}

node* reverse(node* &head) {            // Iterative Approach of reversing a list
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

node* reverseRecursive(node* &head) {                   // Recursive Approach of reversing a list

    if (head == NULL or head->next == NULL) {
        return head;
    }

    node* ReverseHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return ReverseHead;
}

signed main(void) {

    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    
        int k = 2;
        node* new_head = reverse_k_nodes(head, k);
        display(new_head);
}