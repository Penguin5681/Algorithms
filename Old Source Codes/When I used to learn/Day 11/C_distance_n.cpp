// min Distance between two nodes of a tree.

#include <bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

node* LCA(node* root, int n1, int n2) {
    if (root == NULL)
        return NULL;
    if (root->data == n1 or root->data == n2)
        return root;
    
    if (LCA(root->left, n1, n2) and LCA(root->right, n1, n2))
        return root;
    
    if (root->left != NULL)
        return root->left;
    return root->right;
}

int getDistance(node* root, int key, int distance) {
    if (root == NULL) return -1;
    
    if (root->data == key)
        return distance;

    int left = getDistance(root->left, key, distance + 1);    
    int right = getDistance(root->right, key, distance + 1);
    if (left != -1)   
        return left;  
    return right;
}

int minDistance(node* root, int n1, int n2) {
    if (root == NULL) return 0;
    node* lca = LCA(root, n1, n2);
    return getDistance(lca, n1, 0) + getDistance(lca, n2, 0);
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
    cout << LCA(root, 15, 51)->data << " ";
    cout << minDistance(root, 7, 13);
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