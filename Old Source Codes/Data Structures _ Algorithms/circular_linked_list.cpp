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

void circular_insertAtHead(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;

}

void circular_insertAtTail(node* &head, int val) {
    if (head == NULL) {
        circular_insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
}

void circular_delete_at_head(node* &head) {
    node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        node* to_delete = head;
        temp ->next = head->next;
        head = head->next;

        delete to_delete;
}

void circular_delete(node* &head, int pos) {
    if (pos == 1) {
        circular_delete_at_head(head);
    }

    node* temp = head;
    int count = 1;
        while (count != pos - 1) {
            temp = temp->next;
            count++;
        }
        node* ToDelete = temp->next;
        temp->next = temp->next->next;

        delete ToDelete;
}

void display(node* head) {                      // To display the linked list
    node* temp = head;
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }   while (temp != head);
        std::cout << "NULL" << '\n';
}

signed main(void) {
}