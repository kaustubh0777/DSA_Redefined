#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to return the length
// of the loop when slow and fast are
// on the same node
int findLength(Node* slow, Node* fast){
    
    // Count to keep track of 
    // nodes encountered in loop
    int cnt = 1;
    
    // Move fast by one step
    fast = fast->next;
    
    // Traverse fast till it 
    // reaches back to slow
    while(slow != fast){
        
        // At each node increase
        // count by 1 and move fast
        // forward by one step
        cnt++;
        fast = fast->next;
    }
    
    // Loop terminates when fast reaches
    // slow again and the count is returned
    return cnt;
}

// Function to find the length
// of the loop in a linked list
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Traverse the list to detect a loop
    while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;     
        // Move fast two steps
        fast = fast->next->next;

        // Step 2: If the slow and fast pointers
        // meet, there is a loop
        if (slow == fast) {
            // Return the number of nodes
            // in the loop
            return findLength(slow, fast);
        }
    }

    // Step 3: If the fast pointer
    // reaches the end, there is no loop
    return 0; 
}

// Example usage
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = head->next; // Create a loop

    std::cout << "Length of loop: " << lengthOfLoop(head) << std::endl;

    // Free memory
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
