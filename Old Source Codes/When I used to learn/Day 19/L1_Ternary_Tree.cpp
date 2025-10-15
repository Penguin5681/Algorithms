#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* mid;
    struct node* right;

    node(int value) : data(value), left(NULL), mid(NULL), right(NULL) {}
};

signed main(void) {
    struct node* root = new node(30);
    // left subtree
    root->left = new node(5);
    root->left->left = new node(1);
    root->left->mid = new node(4);
    root->left->right = new node(8);

    // mid subtree
    root->mid = new node(11);
    root->mid->left = new node(6);
    root->mid->mid = new node(7);
    root->mid->right = new node(15);

    // right subtree
    root->right = new node(63);
    root->right->left = new node(31);
    root->right->mid = new node(55);
    root->right->right = new node(65);

    cout << root->mid->left->data << " ";
}

// A Ternary Tree is a tree data structure in which each node has at most three child nodes
// usually distinguished as “left”, “mid” and “right”.