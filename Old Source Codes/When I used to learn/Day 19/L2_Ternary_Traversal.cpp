#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    vector<node*> kids;

    node(int value) : data(value) {}
}; 

void preOrderSeq(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    for (node* kid : root->kids) {
        preOrderSeq(kid);
    }
}

node* getMiddleKid(node* Node) {
    if (Node->kids.size() < 2) return NULL;
    return Node->kids[1];
}

int main(void) {
    node* node1 = new node(30);
    node* node2 = new node(5);
    node* node3 = new node(1);
    node* node4 = new node(4);
    node* node5 = new node(8);
    node* node6 = new node(11);
    node* node7 = new node(6);
    node* node8 = new node(7);
    node* node9 = new node(15);
    node* node10 = new node(63);
    node* node11 = new node(31);
    node* node12 = new node(55);
    node* node13 = new node(65);

    node1->kids = {node2, node6, node10};
    node2->kids = {node3, node4, node5};
    node6->kids = {node7, node8, node9};
    node10->kids = {node11, node12, node13};
    preOrderSeq(node1); cout << endl;
    if (getMiddleKid(node11)) {
        cout << getMiddleKid(node11)->data << " ";
    }
    else cout << "No Middle Kid";
}