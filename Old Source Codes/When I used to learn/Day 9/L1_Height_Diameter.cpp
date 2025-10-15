// Height: It is the depth of the tree's deepest node
// Diameter: It is the number of nodes in the longest path between 2 leaves
#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

int getHeight(node* root) {
    if (root == NULL) return 0;
    return max(getHeight(root->left), getHeight(root->right)) + 1;
}

int getDiameter(node* root) {       // Takes O(n ** 2)  
    if (root == NULL) return 0;
    int lHeight = getHeight(root->left);
    int rHeight = getHeight(root->right);
    int curr = lHeight + rHeight + 1;
    int lDiameter = getDiameter(root->left);
    int rDiameter = getDiameter(root->right);
    return max(curr, max(lDiameter, rDiameter));
}

int getDiameter(node* root, int *height) {      // Takes O(n) [Optimized]
    if (root == NULL) {
        *height = 0;
        return 0;
    }
    int lHeight = 0, rHeight = 0;
    int lDiameter = getDiameter(root->left, &lHeight);
    int rDiameter = getDiameter(root->right, &rHeight);
    int curr = lHeight + rHeight + 1;
    *height = max(lHeight, rHeight) + 1;
    return max(curr, max(lDiameter, rDiameter));
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
    cout << getHeight(root) << endl;
    cout << getDiameter(root) << endl;
    int h = 0;
    cout << getDiameter(root, &h);
}

/*
The binary tree: (Lines: [45, 52])

         1
       /   \
      12    5
     / \  /  \
    6  7  13  51
   /
  15

*/