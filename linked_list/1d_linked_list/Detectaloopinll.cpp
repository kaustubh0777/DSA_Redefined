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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    // Create a linked list with a cycle: 1 -> 2 -> 3 -> 4 -> 5 -> 2
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next;

    Solution sol;
    bool has_cycle = sol.hasCycle(head);

    // Print whether a cycle exists
    cout << "Does the linked list have a cycle? " << (has_cycle ? "Yes" : "No") << endl;

    return 0;
}
