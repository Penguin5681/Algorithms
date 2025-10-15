// Sum Replacement: Replace the value of each node with the sum of all subtree nodes and itself
#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

void sumReplace(node* root) {
    if (root == NULL) return;
    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left != NULL) 
        root->data += root->left->data;
    if (root->right != NULL)
        root->data += root->right->data;
}

void preOrder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(void) {
    struct node* root = new node(1);
    root->left = new node(12);
    root->left->left = new node(6);
    root->left->left->left = new node(15);
    root->left->right = new node(7);
    root->right = new node(5);
    root->right->left = new node(13);
    root->right->right = new node(51);
    
    /*
            1
          /   \
         12    5
        / \  /  \
       6  7  13  51
      /
     15
    
    */
    preOrder(root); cout << endl;
    sumReplace(root);
    preOrder(root);

}