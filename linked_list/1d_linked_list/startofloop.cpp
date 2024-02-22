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
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        if (!(fast && fast->next)) {
            return NULL;
        }

        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
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
    ListNode* cycle_start = sol.detectCycle(head);

    // Print the value of the node where the cycle begins
    if (cycle_start) {
        cout << "Cycle starts at node with value: " << cycle_start->val << endl;
    } else {
        cout << "No cycle found." << endl;
    }

    return 0;
}
