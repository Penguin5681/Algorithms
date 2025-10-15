#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrderTraversal(struct node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(struct node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct node* root) {
    if (root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

/*

        1
      /   \
     12    5
    / \  /  \
   6  7  13  51
  /
 15

*/
signed main(void) {
    struct node* root = new node(1);
    root->left = new node(12);
    root->left->left = new node(6);
    root->left->left->left = new node(15);
    root->left->right = new node(7);
    root->right = new node(5);
    root->right->left = new node(13);
    root->right->right = new node(51);

    preOrderTraversal(root);
    cout << '\n';
    inOrderTraversal(root);
    cout << '\n';
    postOrderTraversal(root);
}