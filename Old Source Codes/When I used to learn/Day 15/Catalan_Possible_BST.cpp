#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

// Given a number n (number of nodes), we have to find the possible BST structures 

vector<node*> buildBST(int begin, int end) {
    vector<node*> BSTs;
    if (begin > end) {
        BSTs.push_back(NULL);
        return BSTs;
    }
    for (int i = begin; i <= end; ++i) {
        vector<node*> leftSub = buildBST(begin, i - 1);
        vector<node*> rightSub = buildBST(i + 1, end);
            for (int j = 0; j < leftSub.size(); ++j) {
                node* left = leftSub[j];
                for (int k = 0; k < rightSub.size(); ++k) {
                    node *right = rightSub[k];
                    node* newNode = new node(i);
                    newNode->left = left;
                    newNode->right = right;
                    BSTs.push_back(newNode);
                }
            }
    }
    return BSTs;
}

void preOrderSeq(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderSeq(root->right);
    preOrderSeq(root->left);
}

signed main(void) {
    int n = 3;
    vector<node*> rsl = buildBST(1, n);
    int count = 1;
    for (auto i : rsl) {
        cout << "Tree " << count << ": ";
        preOrderSeq(i);
        cout << endl;
        count++;
    }
}