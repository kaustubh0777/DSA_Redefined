#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reversell(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* rest = reversell(head->next);
        head->next->next = head;
        head->next = NULL;

        return rest;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* new_head = reversell(head);
        return new_head;
    }
};

// Function to print the linked list.
void printLinkedList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* new_head = sol.reverseList(head);

    // Print the reversed linked list
    cout << "Reversed linked list: ";
    printLinkedList(new_head);

    return 0;
}
