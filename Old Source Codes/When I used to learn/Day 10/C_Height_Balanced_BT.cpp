// Balanced Height Tree: For each node, the absolute difference between the heights of left subtree and right subtree is <= 1
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

bool isBalanced(node* root) {           // takes O(n ** 2)
    if (root == NULL) return true;
    if (isBalanced(root->left) == false) 
        return false;
    if (isBalanced(root->right) == false)
        return false;
    int lHeight = getHeight(root->left);
    int rHeight = getHeight(root->right);

    if (abs(lHeight - rHeight) <= 1)
        return true;
    return false;
}

bool isBalanced(node* root, int *height) {      // takes O(n) [Optimized]
    if (root == NULL) return true;
    int lHeight = 0; int rHeight = 0;
    if (isBalanced(root->left, &lHeight) == false)
        return false;
    if (isBalanced(root->right, &rHeight) == false)
        return false;
    *height = max(lHeight, rHeight) + 1;
    if (abs(lHeight - rHeight) <= 1)
        return true;
    return false;
}

signed main(void) {

    {   // tree 1:
        int height = 0;
        struct node* root = new node(1);
        root->left = new node(12);
        root->left->left = new node(6);
        root->left->left->left = new node(15);
        root->left->right = new node(7);
        root->right = new node(5);
        root->right->left = new node(13);
        root->right->right = new node(51);
        if (isBalanced(root, &height)) cout << "TRUE\n";
        else cout << "NO\n";
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
   {
        // tree 2:
        int height = 0;
        struct node* root = new node(1);
        root->left = new node(2);
        root->left->left = new node(3);
        root->left->left->left = new node(4);
        root->right = new node(6);
        if (isBalanced(root, &height)) cout << "TRUE\n";
        else cout << "NO\n";
    }
}