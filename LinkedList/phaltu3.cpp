#include <stdio.h>
#include <stdlib.h>

// Define the Node structure for the circular linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new Node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Malloc failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the circular linked list
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);

    if (head == NULL) {
        newNode->next = newNode; // Circular link to itself
        return newNode;          // Return the new node as the head
    }

    Node* current = head;
    while (current->next != head) {
        current = current->next;
    }

    current->next = newNode;  // Insert the new node at the end
    newNode->next = head;     // Circular link back to the head
    return head;
}

// Function to print the circular linked list
void printCircularLinkedList(Node* head) {

    if (head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    Node* current = head;

    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);

    printf(" (Head)\n");

}

// Function to delete the first node containing a given value in its data field
Node* deleteNodeWithValue(Node* head, int value) {
    if (head == NULL) {
        return NULL; // List is empty, nothing to delete
    }

    Node* current = head;
    Node* prev = NULL;

    // Traverse the list to find the node to delete
    do {
        if (current->data == value) {
            if (prev == NULL) {
                // Deleting the head node
                Node* last = head;
                while (last->next != head) {
                    last = last->next;
                }
                head = head->next;  // Move the head to the next node
                last->next = head;  // Update the circular link
                free(current);      // Free the memory of the deleted node
                return head;
            } else {
                prev->next = current->next; // Update the previous node's next pointer
                free(current);              // Free the memory of the deleted node
                return head;
            }
        }
        prev = current;
        current = current->next;
    } while (current != head);

    // Value not found, return the original list
    return head;
}

// Function to free the memory used by the circular linked list
void destroyCircularLinkedList(Node* head) {
    if (head == NULL) {
        return;
    }

    Node* current = head;
    Node* temp;

    do {
        temp = current->next;
        free(current);
        current = temp;
    } while (current != head);
}

int main() {
    Node* head = NULL;

    // Insert elements into the circular linked list
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);

    // Print the circular linked list
    printf("Circular Linked List:\n");
    printCircularLinkedList(head);

    // Delete the node containing value '2' (first occurrence)
    head = deleteNodeWithValue(head, 2);

    // Print the updated circular linked list
    printf("Updated Circular Linked List:\n");
    printCircularLinkedList(head);

    // Free the memory used by the circular linked list
    destroyCircularLinkedList(head);

    return 0;
}