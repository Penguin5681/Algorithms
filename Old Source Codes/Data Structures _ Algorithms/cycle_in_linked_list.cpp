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

bool DetectCycle(node* &head) {             // Detects if there is any cycle present in a list (Hare and Tortoise algorithm)
    node* HARE = head;
    node* TORTOISE = head;

        while (HARE != NULL and HARE->next != NULL) {
            TORTOISE = TORTOISE->next;
            HARE = HARE->next->next;

            if (HARE == TORTOISE) {
                return true;                // 1 if cycle is found; 0 if not found
            }
        }
        return false;
}

   
void MakeCycle(node* &head, int pos) {          // Makes a cycle in a list (It will go on forever)
    node* temp = head;
    node* StartNode;

    int count = 1;
        while (temp->next != NULL) {
            if (count == pos) {
                StartNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = StartNode;
}

void RemoveCycle(node* &head) {             // Removes a formed cycle 
    node* HARE = head;
    node* TORTOISE = head;
        do {
            TORTOISE = TORTOISE->next;
            HARE = HARE->next->next;
        } while (TORTOISE != HARE);

        HARE = head;
            while (TORTOISE->next != HARE->next) {
                TORTOISE = TORTOISE->next;
                HARE = HARE->next;
            }

            TORTOISE->next = NULL;
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

}