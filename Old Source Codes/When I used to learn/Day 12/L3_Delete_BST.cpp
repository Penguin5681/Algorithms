#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

node* inOrderSuccessor(node* root) {
    node* curr = root;
        while (curr->left != NULL and curr != NULL) 
            curr = curr->left;
    return curr;
}

node* deleteBST(node* root, int key) {
    if (key < root->data)
        root->left = deleteBST(root->left, key);
    else if (key > root->data)
        root->right = deleteBST(root->right, key);
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = inOrderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}

void inOrderSequence(node* root) {
    if (root == NULL) return;
    inOrderSequence(root->left);
    cout << root->data << " ";
    inOrderSequence(root->right);
}

void preOrder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

signed main(void) {
    struct node* root = new node(3);
    root->left = new node(2);
    root->left->left = new node(1);
    root->right = new node(7);
    root->right->left = new node(5);
    root->right->right = new node(8);
    root->right->left->left = new node(4);
    root->right->left->right = new node(6);    
    inOrderSequence(root); cout << endl;
    deleteBST(root, 1); cout << endl;
    inOrderSequence(root); 
    deleteBST(root, 4); cout << endl;
    inOrderSequence(root);
}