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

void display(node* head) {                      // To display the linked list
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << '\n';
}

void do_intersect(node* &head1, node* head2, int pos) {             // Creates a intersection between two linked list
    node* temp1 = head1;
        pos--;
        while (pos--) {
            temp1 = temp1->next;
        }
        node* temp2 = head2;
        while (temp2->next != NULL) {
            temp2 = temp2->next;
        }
        
        temp2->next = temp1;
}

int is_intersecting(node* &head1, node* &head2) {
    int L1 = length(head1);
    int L2 = length(head2);
    int d = 0;

    node* ptr1;
    node* ptr2;
        if (L1 > L2) {
            d = L1 - L2;
            ptr1 = head1;
            ptr2 = head2;
        }
        else {
            d = L2 - L1;
            ptr1 = head2;
            ptr2 = head1;
        }
            while (d) {
                ptr1 = ptr1->next;
                    if (ptr1 == NULL) {
                        return -1;
                    }
                d--;
            }
            while (ptr1 != NULL and ptr2 != NULL) {
                if (ptr1 == ptr2) {
                    return ptr1->data;
                }
                
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            return -1;
}

signed main(void) {

    node* head1 = NULL;
    node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    do_intersect(head1, head2, 5);
        
    display(head1); display(head2);

    std::cout << is_intersecting(head1, head2);

}