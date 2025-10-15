// Maximum Path Sum: Max possible sum of the path in a binary tree, starting and ending at any node

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

int maxPathSumUtil(node* root, int &ans) {
    if (root == NULL) return 0;
    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);
    int nodeMax = max(max(root->data, root->data + left + right), 
                    max(root->data + left, root->data + right));
    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}

int maxPathSum(node* root) {
    int maxSum = INT_MIN;
    maxPathSumUtil(root, maxSum);
    return maxSum;
}

signed main(void) {
    struct node* root = new node(-10);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);

    cout << maxPathSum(root);
    /*
            1   
           / \
          12  5
         / \ / \
        6  7 13 51
       /
      15
    */
}