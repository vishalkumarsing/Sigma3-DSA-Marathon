#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

bool hasCycle(Node* head) {
    if (!head || !head->next) {
        // If the list is empty or has only one element, there's no cycle.
        return false;
    }

    Node* slow = head;     // Slow pointer moves one step at a time.
    Node* fast = head->next; // Fast pointer moves two steps at a time.

    while (slow != fast) {
        if (!fast || !fast->next) {
            // If the fast pointer reaches the end of the list, there's no cycle.
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    // If the slow and fast pointers meet, there is a cycle.
    return true;
}

int main() {
    // Create a sample linked list with a cycle.
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Create a cycle

    if (hasCycle(head)) {
        std::cout << "The linked list has a cycle." << std::endl;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }

    // Clean up the memory
    delete head->next->next->next->next;
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
