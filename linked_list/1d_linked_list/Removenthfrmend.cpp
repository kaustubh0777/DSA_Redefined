#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
    ListNode* cur = head;
    int count = 0;//length of the linked list
    while (cur != NULL) {
        count++;
        cur = cur->next;
    }

    int pos = count - n;//position of the node to be removed 
    if (pos == 0) {
        head = head->next;
        return head;
    }//if its the first node
    cur = head;
    int k = 0;
    while (cur != NULL) {
        k++;
        if (k == pos) {//when we reach the position just before the node to be removed
            cur->next = cur->next->next;
            break;
        }
        cur = cur->next;
    }
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

    int n=2;

    Solution solution;
    ListNode *result = solution.removeNthFromEnd(head,n);

    // Print the resulting list
    while (result)
    {
        std::cout << result->data << " ";
        result = result->next;
    }
    std::cout << std::endl;
}
