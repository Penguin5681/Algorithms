// Given a binary tree, flatten it into linked list in-
// place. After flattening, left of each node should
// point to NULL and right should contain next node
// in preorder sequence.
// (It's NOT allowed to use other data structures)

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

void inOrderSequence(node* root) {
    if (root == NULL) return;
    inOrderSequence(root->left);
    cout << root->data << " ";
    inOrderSequence(root->right);
}

void flattenTREE(node* &root) {
    if (root == NULL or (root->left == NULL and root->right == NULL)) return; 
    if (root->left != NULL) {
        flattenTREE(root->left);
        
        node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        node* t = root->right;
            while (t->right != NULL) 
                t = t->right;
            
            t->right = temp;
    }    
    flattenTREE(root->right);
}

signed main(void) {
    struct node* root = new node(1);
    root->left = new node(12);
    root->left->left = new node(6);
    root->left->left->left = new node(15);
    root->left->right = new node(7);
    root->right = new node(5);
    root->right->left = new node(13);
    root->right->right = new node(51);
    // preOrderSequence(root);
    inOrderSequence(root); cout << endl;    
    flattenTREE(root);
    inOrderSequence(root);
    /*
            1
          /   \
         12    5
        / \  /  \
       6  7  13  51
      /
     15
    
    */
}