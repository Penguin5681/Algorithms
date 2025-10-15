#include "L1_Maps_Sets.cpp"
#include "L2_LinkedLists.cpp"

signed main(void) {
    // makeMap();
    // makeSet();  
    // q2();

    node* head = NULL;
    
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int it : A) insertAtTail(head, it);

    // if (searchLL(head, 12)) cout << "Found";
    // else cout << "Not Found";
    // deleteNthNode(head, 10);
    
    // displayLL(reverseK(head, 2));
    createCycle(head, 3);
    //removeCycle(head);
    if (isCyclic(head)) cout << "Yes";
    else cout << "No\n";
    displayLL(head);
}   