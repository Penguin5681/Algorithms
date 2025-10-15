// Linked List Cycle

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using node = ListNode;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        node* slow = head;
        node* fast = head;

        while (fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) 
                return true;
        }
        return false;
    }
};

signed main(void) {
    Solution s;
}