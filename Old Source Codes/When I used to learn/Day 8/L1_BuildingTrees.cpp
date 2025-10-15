#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int value) : data(value), left(NULL), right(NULL) {}
};

int inOrderSearch(int inOrder[], int start, int end, int curr) {
    for (int i = start; i <= end; ++i) {
        if (inOrder[i] == curr)
            return i;
    }
        return -1;
}

node* makeTree(int preOrder[], int inOrder[], int start, int end) {     // start and end shows the start and end of inOrder
    static int idx = 0;
    if (start > end) 
        return NULL;

    int curr = preOrder[idx]; 
    idx++;
    node* Node = new node(curr);
    if (start == end)
        return Node;

    int pos = inOrderSearch(inOrder, start, end, curr);
    Node->left = makeTree(preOrder, inOrder, start, pos - 1);
    Node->right = makeTree(preOrder, inOrder, pos + 1, end);

    return Node;
}

int inOrderSearch(vector<int> &inOrder, int start, int end, int curr) {
    for (int i = end; i >= start; --i) {
        if (inOrder[i] == curr)
        return i;
    }
    return -1;
}

node* makeTree(vector<int> &postOrder, vector<int> &inOrder, int start, int end) {
    static int idx = postOrder.size() - 1;
    if (start > end) 
        return NULL;

    int curr = postOrder[idx];
    idx--;
    node* Node = new node(curr);
    if (start == end) 
        return Node;

    int pos = inOrderSearch(inOrder, start, end, curr);
    Node->right = makeTree(postOrder, inOrder, pos + 1, end);
    Node->left = makeTree(postOrder, inOrder, start, pos - 1);
}

void inOrderSequence(node* root) {
    if (root == NULL) return;
    inOrderSequence(root->left);
    cout << root->data << " ";
    inOrderSequence(root->right);
}

void preOrderSequence(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderSequence(root->left);
    preOrderSequence(root->right);
}

void postOrderSequence(node* root) {
    if (root == NULL) return;
    postOrderSequence(root->left);
    postOrderSequence(root->right);
    cout << root->data << " ";
}

int main(void) {
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};
    node* root = makeTree(preOrder, inOrder, 0, 4);
    inOrderSequence(root); cout << '\n';
    preOrderSequence(root); cout << '\n';

    vector<int> postorder = {4, 2, 5, 3, 1};
    vector<int> inOrderSQ = {4, 2, 1, 5, 3};
    node* newRoot = makeTree(postorder, inOrderSQ, 0, 4);
    postOrderSequence(newRoot); cout << '\n';
    inOrderSequence(newRoot);
}

/*
    Algorithm:
    
    Consider the following sequences:
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    1. Pick an element from preOrder Sequence and create a node
    -> Line [30, 32]
    -> where curr is the current element

    2. Increment the index idx
    
    3. Search for picked element's position in inOrder Sequence
    -> we search for the index of int curr = preOrder[idx];
    -> idxCURR = pos; 

    4. Recursively call to build left subtree from start to pos - 1

    5. Recursively call to build right subtree from pos + 1 to end

    6. Return the node
*/