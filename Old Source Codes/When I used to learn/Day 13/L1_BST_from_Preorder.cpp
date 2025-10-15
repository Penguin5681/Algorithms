#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

void preOrderSequence(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderSequence(root->left);
    preOrderSequence(root->right);
}

node* preOrderBuild(int preOrder[], int *preOrder_idx, int key, int min, int max, int n) {
    if (*preOrder_idx >= n) 
        return NULL;
    node* root = NULL;
    
    if (key > min and key < max) {
        root = new node(key);
        *preOrder_idx = *preOrder_idx + 1   ;

        if (*preOrder_idx < n)
            root->left = preOrderBuild(preOrder, preOrder_idx, preOrder[*preOrder_idx], min, key, n);
        
        if (*preOrder_idx < n)
            root->right = preOrderBuild(preOrder, preOrder_idx, preOrder[*preOrder_idx], key, max, n);
    }
    return root;
}

signed main(void) {
    int preOrder[] = {3, 2, 1, 7, 5, 4, 6, 8};
    int idx = 0;
    int n = 8;
    node* root = preOrderBuild(preOrder, &idx, preOrder[0], INT_MIN, INT_MAX, n);
    preOrderSequence(root);
}