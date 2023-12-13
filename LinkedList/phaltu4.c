#include <stdio.h>
#include <stdlib.h>

// Define the Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;


// Function to check if the linked stack is empty
int isEmpty(Node* top) {
    return (top == NULL);
}

// Function to push an element onto the linked stack (modifies the top node)
void push(Node** top, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *top; // The new node points to the previous top
    *top = newNode;       // Update the top to the new node
}

// Function to pop an element from the linked stack (modifies the top node)
void pop(Node** top, int* data) {
    if (isEmpty(*top)) {
        fprintf(stderr, "Stack is empty, cannot pop\n");
        exit(1);
    }
    Node* topNode = *top;
    *data = topNode->data;
    *top = topNode->next; // Update the top to the next node
    free(topNode);        // Free the memory of the popped node
}

// Function to get the top element of the linked stack without popping it
int peek(Node* top) {
    if (isEmpty(top)) {
        fprintf(stderr, "Stack is empty, cannot peek\n");
        exit(1);
    }
    return top->data;
}

// Function to print the linked stack (for debugging)
void printLinkedStack(Node* top) {
    printf("Stack: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

// Function to free the memory used by the linked stack
void destroyLinkedStack(Node* top) {
    while (!isEmpty(top)) {
        int data;
        pop(&top, &data);
    }
}

int main() {
    Node* top = NULL;

    // Push elements onto the stack
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);

    // Print the stack
    printLinkedStack(top);

    // Peek at the top element
    printf("Top element: %d\n", peek(top));

    // Pop elements from the stack
    int poppedData;
    pop(&top, &poppedData);
    printf("Popped: %d\n", poppedData);
    pop(&top, &poppedData);
    printf("Popped: %d\n", poppedData);

    // Print the stack after popping
    printLinkedStack(top);

    // Free the memory used by the stack
    destroyLinkedStack(top);

    return 0;
}