#include "F:\To Do\Day 3\L2_LinkedLists.cpp"

int lengthLL(node* head) {
    int l = 0;
    node* temp = head;
    while (temp != NULL) {
        l++;
        temp = temp->next;
    }
    return l;
}

node* appendK_nodes(node* &head, int K) {
    node* newHead;
    node* newTail;
    node* tail = head;
    
    int l = lengthLL(head);
    K %= l;
    int count = 1;
        while (tail->next != NULL) {
            if (count == l - K) {
                newTail = tail;
            }
            if (count == l - K + 1) 
                newHead = tail; 
            tail = tail->next;
            count++;
        }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

signed main(void) {
    node* head = NULL;
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i : A) insertAtTail(head, i);
    // cout << lengthLL(head);
    
    displayLL(appendK_nodes(head, 4));
}