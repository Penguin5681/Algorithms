#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &St, int value) {
    if (St.empty()) {
        St.push(value); return;
    }
    
    int topELE = St.top();
    St.pop();
    insertAtBottom(St, value);
    St.push(topELE);
}

void reverseStack(stack<int> &St) {
    if (St.empty()) return;

    int topELE = St.top();
    St.pop();
    reverseStack(St);
    insertAtBottom(St, topELE);
}