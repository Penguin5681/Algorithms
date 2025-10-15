#include <bits/stdc++.h>

class node {                                        // Node Definition
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL;
        }
};

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

int length(node *head) {                            // Calculates the length of a linked list
    int l = 0;
    node* temp = head;
        while (temp != NULL) {
            l++;
            temp = temp->next;
        }
        return l;
}

node* K_append(node* &head, int k) {                // Appends given k nodes at the head
    node* NewHead;
    node* NewTail;
    node* tail = head;

    int l = length(head);
    k = k % l;    
    int count = 1;
        while (tail->next != NULL) {
            if (count == l - k) {
                NewTail = tail;  
            }
            if (count = l - k + 1) {
                NewHead = tail;
            }
            tail = tail->next;
            count++;
        }

        return NewHead;
}

void display(node* head) {                      // To display the linked list
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << '\n';
}

signed main(void) {
    node* head = NULL;
    int arr1[] = {1, 2, 3, 4, 5, 6};
        for (int i = 0; i < 6; i++) {
            insertAtTail(head, arr1[i]);
        }
        display(head);

        node* New_Head = K_append(head, 3);
        display(New_Head);

        return 0;
}