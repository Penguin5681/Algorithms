// BST = Binary Search Tree
// Rule 1: The left subtree of a node contains only nodes with keys lesser than the node's key
// Rule 2: The right subtree of a node contains only nodes with keys greater than the node's key 
// Rule 3: The left and right subtree each must also be a Binary Search Tree.
// Rule 4: No duplicate nodes are allowed

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

node* buildBST(node* root, int value) {
    if (root == NULL) 
        return new node(value);
    if (value < root->data)
        root->left = buildBST(root->left, value);
    else 
        root->right = buildBST(root->right, value);
    return root;
}

void inOrderSequence(node* root) {
    if (root == NULL) return;
    inOrderSequence(root->left);
    cout << root->data << " ";
    inOrderSequence(root->right);
}

signed main(void) {
    node* root = NULL;
    root = buildBST(root, 5);
    buildBST(root, 1);
    buildBST(root, 3);
    buildBST(root, 4);
    buildBST(root, 5);
    buildBST(root, 7);
    inOrderSequence(root);
}

// Binary Search Tree always returns sorted inOrder sequence  