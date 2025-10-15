// 24. Swap Nodes in Pairs

#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head or !head->next) return head;
        ListNode* temp_node = new ListNode();
        ListNode* previous_node = temp_node;
        ListNode* current_node = head;

        while (current_node and current_node->next) {
            previous_node->next = current_node->next;
            current_node->next = previous_node->next->next;
            previous_node->next->next = current_node;

            previous_node = current_node;
            current_node = current_node->next;
        }

        return temp_node->next;
    }
};

signed main() {

}