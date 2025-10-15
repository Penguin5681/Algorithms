#include <bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node* right;
        node* left;

        node(int value) : data(value), right(nullptr), left(nullptr) {}
};

static node* newNode;

node* buildBST(node* root, int value) {
    if (root == nullptr) 
        root = new node(value);
    
    if (root->data < value)
        root->right = buildBST(root->right, value);
    
    if (root->data > value)
        root->left = buildBST(root->left, value);
    
    return root;
}

void inOrderSeq(node* root) {
    if (root == nullptr) return;
    inOrderSeq(root->left);
    cout << root->data << " ";
    inOrderSeq(root->right);
}

signed main(void) {
    int preOrder[] = {3, 2, 1, 7, 5, 4, 6, 8};
    node* root = nullptr;
    for (int i : preOrder)
        root = buildBST(root, i);
    inOrderSeq(root);
}