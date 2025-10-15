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

bool isBST(node* root, int lower_limit, int upper_limit) {
    if (root == NULL) return true;
    if (lower_limit != INT_MIN and root->data <= lower_limit)
        return false;
    if (upper_limit != INT_MAX and root->data >= upper_limit)
        return false;
    if (!isBST(root->left, lower_limit, root->data))
        return false;
    if (!isBST(root->right, root->data, upper_limit))
        return false;
    return true;
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
    auto start = chrono::high_resolution_clock::now();
    cout << isBST(root, INT_MIN, INT_MAX);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> Time_Elapsed = end - start;
    cerr << "\nTime Elapsed: " << fixed << Time_Elapsed.count() << "s";
}

/*
If currentNode equals null, return true

If lowerLimit does not equal null and the value at currentNode is less than or equal to lowerLimit, return false

If upperLimit does not equal null and the value at currentNode is greater than or equal to upperLimit, return false

Recursively check that the left subtree of currentNode is a binary search tree, with the value of currentNode as the upper limit and 
lowerLimit as the lower limit. If the left subtree is not a binary search tree then return false.

Recursively check that the right subtree of currentNode is a binary search tree, with the value of currentNode as the lower limit and
upperLimit as the upper limit. If the right subtree is not a binary search tree, then return false.

Return true

*/