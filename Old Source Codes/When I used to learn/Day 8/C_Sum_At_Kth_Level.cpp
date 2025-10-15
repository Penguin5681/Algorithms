#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

int KthLevelSum(node* root, int K) {
    if (root == NULL) return -1;
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    int level = 0;
    int sum = 0;    
        while (!Q.empty()) {
            node* Node= Q.front();
            Q.pop();
            if (Node != NULL) {
                if (level == K) 
                    sum += Node->data;
                if (Node->left)
                    Q.push(Node->left);
                if (Node->right)
                    Q.push(Node->right);
            }
            else if (!Q.empty()) {
                Q.push(NULL);
                level++;
            }
        }
    return sum;
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

    cout << KthLevelSum(root, 2);
}

// 1,12,6,15,7,5,13,51