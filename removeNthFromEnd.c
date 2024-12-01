#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
   // Dummy node to simplify edge cases (e.g., removing the head)
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* first = &dummy;
    struct ListNode* second = &dummy;

    // Move `first` pointer `n + 1` steps ahead
    for (int i = 0; i <= n; i++) {
        if (first == NULL) return head; // Handle invalid `n`
        first = first->next;
    }

    // Move both pointers until `first` reaches the end
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    // Remove the target node
    struct ListNode* toDelete = second->next;
    second->next = toDelete->next;
    free(toDelete); // Free memory of the removed node

    return dummy.next; // Return the updated list
}