#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

void levelOrderSequence(node* root) {
    if (root == NULL) return;
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
        while (!Q.empty()) {
            node* Node = Q.front();
            Q.pop();
            if (Node != NULL) {
                cout << Node->data << " ";
                if (Node->left)
                    Q.push(Node->left);
                if (Node->right)
                    Q.push(Node->right);
            }
            else if (!Q.empty()) {
                Q.push(NULL);
            }
        }
}

signed main(void) {
    struct node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);

    levelOrderSequence(root);
}