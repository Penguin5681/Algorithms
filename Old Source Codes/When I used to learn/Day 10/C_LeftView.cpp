#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

void leftView(node *root) {
    if (root == NULL) return;

    queue<node*> Q;
    Q.push(root);
        while (!Q.empty()) {
            int n = Q.size();
            for (int i = 1; i <= n; ++i) {
                node* front = Q.front();
                Q.pop();

                if (i == 1)
                    cout << front->data << " ";
                if (front->left != NULL)
                    Q.push(front->left);
                if (front->right != NULL)
                    Q.push(front->right);
            }
        }
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
    leftView(root);
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