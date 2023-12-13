#include <stdio.h>
#include <stdlib.h>

typedef struct node_tag {
    int data;
    struct node_tag* next;
} Node;

/* Skipping func decls. */

Node* createNode(int data) {
    Node* p = (Node*)malloc(sizeof(Node));
    if (p == NULL) {
        printf("Malloc failed\n");
        exit(1);
    }
    p->data = data;
    p->next = NULL;
    return p;
}

// Function to insert a new node at the head (note the double star)
void insertAtHead(Node** head, int data) {

    Node* p = (Node*)malloc(sizeof(Node));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    p->data = data;
    p->next = NULL;

    p->next = *head;
    *head = p;
}

// Function to insert a new node after a given node
void insertAfterNode(Node* prev, int data) {

    Node* p = createNode(data);
    p->next = prev->next;
    prev->next = p;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int data) {
    Node* p = createNode(data);

    if (*head == NULL) {
        *head = p; // If the list is empty, make the new node the head
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = p;
    }
}

// Function to print the linked list
void display(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Recursive display
void displayrec(Node* head) {
    if (head) {
        printf("%d -> ", head->data);
        displayrec(head->next);
    } else printf("NULL\n");
}

// Recursive display (reverse order)
void displayrecrev(Node* head) {
    static int i = 0;
    if (head) { i++; displayrecrev(head->next); printf("%d -> ", head->data); i--;}
    if (i==0) printf("NULL");
}

// A single "combined" function to delete (the first occurrence of) 'value'
void deleteByValue(Node** head, int value) {

    if (*head == NULL) {
        return; // The list is empty, so there's nothing to delete
    }

    // Case when 'value' is found in head node
    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    Node* current = *head;
    Node* prev = NULL;

    // General case: search for node containing the value to be deleted
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If node found, delete
    if (current != NULL) {
        prev->next = current->next;
        free(current);
    }
}

/* Play around with the code and try to understand how it works.
   Modify the delete function to delete before/after a given node.
   Write recursive functions to traverse as discussed in class on 13/9 */

int main() {
    Node* head = createNode(10); // first node
    insertAtHead(&head,5);
    insertAtEnd(&head,20);
    insertAfterNode(head,7);
    //display(head);
    //deleteByValue(&head,7);
    displayrecrev(head);
    return 0;
}