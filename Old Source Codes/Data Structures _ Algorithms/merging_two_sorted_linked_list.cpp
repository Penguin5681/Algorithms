#include <bits/stdc++.h>
#include <queue>

using namespace std;

class queue_undefined {                     // User Defined queue
    public:
        int data;
        node* next;

        queue_undefined(int val) {
            data = val;
            next = NULL;
        }
};

class node {
    public:
        int data;
        node* next;

        node(int val) {
            data = val;
            next = NULL;
        }
};

void push_Queue(int *data) {
    node* n = new node(*data);
    
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

int length(node *head) {                            // Calculates the length of a linked list
    int l = 0;
    node* temp = head;
        while (temp != NULL) {
            l++;
            temp = temp->next;
        }
        return l;
}

void display(node* head) {                      // To display the linked list
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << '\n';
}

node* merge(node* &head1, node* &head2) {           // Merges two singly linked list
    node* p1 = head1;
    node* p2 = head2;
    node* dummy = new node(-1);
    node* p3 = dummy;

        while (p1 != NULL and p2 != NULL) {
            if (p1->data < p2->data) {
                p3->next = p1;
                p1 = p1->next;
            }
            else {
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }
            while (p1 != NULL) {
                p3->next = p1;
                p1 = p1->next;
                p3 = p3->next;

            }
            while (p2 != NULL) {
                p3->next = p2;
                p2 = p2->next;
                p3 = p3->next;

            }

            return dummy->next;
}

node* merge_Recursive(node* &head1, node* head2) {          // Merges two singly linked list (Recursive Approach)
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }
    node* result;
        if (head1->data < head2->data) {
            result = head1;
            result->next = merge_Recursive(head1->next, head2);
        }
        else {
            result = head2;
            result->next = merge_Recursive(head1, head2->next);
        }
    return result;
}

signed main(void) {

    node* head1 = NULL;
    node* head2 = NULL;

    int A[] = {1, 4, 5, 7};
    int B[] = {2, 3, 6, 8};
        for (int i = 0; i < 4; i++) {
            insertAtTail(head1, A[i]);
        }
        for (int i = 0; i < 4; i++) {
            insertAtTail(head2, B[i]);
        }

        display(head1); display(head2);
        node* New_head = merge_Recursive(head1, head2);
        display(New_head);                                  // 1 2 3 4 5 6 7 8 NULL

    return 0;
}