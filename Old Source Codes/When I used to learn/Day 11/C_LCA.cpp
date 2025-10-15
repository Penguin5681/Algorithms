// LCA == Lowest Common Ancestor

#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

bool isThere_A_Path(node* root, int target, vector<int> &path) {
    if (root == NULL) return false;
    path.push_back(root->data);
    if (root->data == target)
        return true;
    
    if (isThere_A_Path(root->left, target, path) or isThere_A_Path(root->right, target, path))
        return true;
    
    path.pop_back();
    return false;
}

int lca(node* root, int n1, int n2) {
    vector<int> path1;      // path 1 = root -> n1
    vector<int> path2;      // path 2 = root -> n2

    if (!isThere_A_Path(root, n1, path1) or !isThere_A_Path(root, n2, path2)) return -1;

    int divergence_Point;
    for (divergence_Point = 0; divergence_Point < path1.size() and divergence_Point < path2.size(); divergence_Point++) {
        if (path1[divergence_Point] != path2[divergence_Point])
            break;
    }
    return path1[divergence_Point - 1];
}

node* optimized_LCA(node* root, int n1, int n2) {
    if (root == NULL)
        return NULL;
    if (root->data == n1 or root->data == n2)
        return root;

    node* left_LCA = optimized_LCA(root->left, n1, n2);
    node* right_LCA = optimized_LCA(root->right, n1, n2);

    if (left_LCA and right_LCA)
        return root;
    
    if (left_LCA != NULL)
        return left_LCA;
    return right_LCA;
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
    cout << lca(root, 7, 6) << '\n';
    cout << optimized_LCA(root, 7, 6)->data;
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