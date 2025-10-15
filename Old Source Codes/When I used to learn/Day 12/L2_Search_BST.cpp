#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

node* searchBST(node* root, int target) {
    if (root == NULL) return NULL;  
    if (root->data == target)
        return root;
    if (root->data < target)
        return searchBST(root->right, target);
    return searchBST(root->left, target); 
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

    int target = 13;
    if (searchBST(root, target) == NULL) cout << target << " Not Found";
    else cout << target << " found"; 
}

// Worst Case: Traversing the entire BST. No. of traversals = Height of BST;
// We do a single comparision on each level of a binary search tree
// Available nodes to traverse goes on like the following 
// We discard a subtree until the value is found
// 0 -> n
// 1 -> n / 2
// 2 -> n / 4
// 3 -> n / 8
// .. -> ..
/*
    let nodes = n;
    let height = h;

    => 1 + 2 + 4 + 8 + .. + 2 ** (h - 1) = n
    => (2 ** h) - 1 = n;
    => 2 ** h == n + 1;
    => h = log2(n + 1)
    => Overall TC: log2(n)        
*/

