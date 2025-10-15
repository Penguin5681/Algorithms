#include <iostream>
#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    unordered_map<string, int> subtreeCount;
    vector<TreeNode *> duplicates;

    string serialize(TreeNode *node)
    {
        if (node == nullptr)
        {
            return "N";
        }

        string left = serialize(node->left);
        string right = serialize(node->right);
        string subtree = to_string(node->val) + left + right;

        subtreeCount[subtree]++;

        if (subtreeCount[subtree] == 2)
        {

            duplicates.push_back(node);
        }

        return subtree;
    }

    int findDuplicateSubtrees(TreeNode *root)
    {
        serialize(root);
        if (duplicates.size() == 0)
            return 1;
        return 0;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(2);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(5);

    Solution solution;
    cout << solution.findDuplicateSubtrees(root);

    delete root->right->right->right;
    delete root->right->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}
