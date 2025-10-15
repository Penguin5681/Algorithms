#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

int nodeCount(node* root) {
    if (root == NULL) return 0;
    return nodeCount(root->left) + nodeCount(root->right) + 1;
}

int nodeSum(node* root) {
    if (root == NULL) return 0;
    return nodeSum(root->left) + nodeSum(root->right) + root->data;    
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
    cout << nodeCount(root) << "\n";
    cout << nodeSum(root);
}