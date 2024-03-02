#include <bits/stdc++.h>
using namespace std;


struct ListNode
{
    int val;
    ListNode*next;

    ListNode(int x)
    {
      val=x;
      next=NULL;

    }
};
class Solution
{
public:
    ListNode *findmid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }
        ListNode *mid = findmid(head);
        ListNode *ptr = head;
        ListNode *ptr1 = mid->next;

        while (ptr->next != mid)
        {
            ptr = ptr->next;
        }
        ptr->next = ptr1;

        return head;
    }
};

int main()
{

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode *result = solution.deleteMiddle(head);

    // Print the resulting list
    while (result)
    {
        std::cout << result->val << " ";
        result = result->next;
    }
    std::cout << std::endl;
}