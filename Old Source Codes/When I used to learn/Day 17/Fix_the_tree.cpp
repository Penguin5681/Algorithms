#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

void util(node* root, node **first, node **mid, node **last, node **prev) {
    if (root == NULL) return;
    util(root->left, first, mid, last, prev);
    if (*prev and root->data < (*prev)->data) {
        if (!*first) {
            *first = *prev;
            *mid = root;
        }
        else {
            *last = root;

        }
    }
    *prev = root;
    util(root->right, first, mid, last, prev);
}

void swap(int *a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void restoreBST(node* root) {
    node* first = NULL;
    node* mid = NULL;
    node* last = NULL;
    node* prev = NULL;

    // Case 1
    util(root, &first, &mid, &last, &prev);
    if (first and last)
        swap(&first->data, &last->data);
    else if (first and mid)
        swap(&first->data, &mid->data);
}

void inOrderSeq(node* root) {
    if (root == NULL) return;
    inOrderSeq(root->left);
    cout << root->data << " ";
    inOrderSeq(root->right);
}

signed main(void) {
    struct node* root = new node(10);
    root->left = new node(7);
    root->left->right = new node(8);
    root->left->left = new node(1);
    root->left->left->right = new node(5);
    root->right = new node(14);
    root->right->right = new node(20);

    inOrderSeq(root);
    restoreBST(root);
    cout << endl;
    inOrderSeq(root);
}

// In a BST, any two of the nodes are swapped making it invalid
// Case 1. Swapped nodes are not adjacent to each other
/*
    Approach: 
    -> Maintain three pointers, first, mid, last
    first = prev node where 1st num < previous
    mid = num where 1st num < previous
    last = 2nd node where num < previous

    swap(first, last);
*/
// Case 2. Swapped nodes are adjacent to each other
/*
    Approach: 
    -> Maintain three pointers, first, mid, last
    first = prev node where 1st num < previous
    mid = num where 1st num < previous
    last = 2nd node where num < previous

    swap(first, mid);
*/