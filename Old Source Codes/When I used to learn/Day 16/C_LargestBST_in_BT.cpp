#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

struct info {
    int size;
    int min;
    int max;
    int rsl;
    bool isBST;
}; 

info largestBST(node* root) {
    if (root == NULL) 
        return {0, INT_MAX, INT_MIN, 0, true};
    if (root->left == NULL and root->right == NULL)
        return {1, root->data, root->data, 1, true};

    info leftSub = largestBST(root->left);
    info rightSub = largestBST(root->right);

    info current_root;
    current_root.size = 1 + leftSub.size + rightSub.size;
    
    if (leftSub.isBST and rightSub.isBST and leftSub.max < root->data and rightSub.min > root->data) {
        current_root.min = min(leftSub.min, min(rightSub.min, root->data));
        current_root.max = max(leftSub.max, max(rightSub.max, root->data));
        current_root.rsl = current_root.size;
        current_root.isBST = true;
    }

    current_root.rsl = max(leftSub.size, rightSub.size);
    current_root.isBST = false;

    return current_root;
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
    struct node* root = new node(10);
    root->left = new node(7);
    root->left->right = new node(8);
    root->left->left = new node(1);
    root->left->left->right = new node(5);
    root->right = new node(14);
    root->right->right = new node(20);
    cout << isBST(root, INT_MIN, INT_MAX) << '\n';
    cout << largestBST(root).rsl << " ";
}