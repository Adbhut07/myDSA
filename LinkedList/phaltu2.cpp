#include <stdio.h>
#include <stdlib.h>

// Define the DLNode structure
typedef struct DLNode {
    int data;
    struct DLNode* prev;
    struct DLNode* next;
} DLNode;

// Function to create a new DLNode
DLNode* createDLNode(int data) {
    DLNode* newNode = (DLNode*)malloc(sizeof(DLNode));
    if (newNode == NULL) {
        fprintf(stderr, "Malloc failure\n");
        return;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a doubly linked list with n elements
DLNode* create_dllist(int n) {
    DLNode* head = NULL;
    DLNode* tail = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);

        DLNode* newNode = createDLNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}

// Function to insert a new node after a given location
void insertAfter(DLNode* p, int data) {
    if (p == NULL) {
        fprintf(stderr, "Invalid location\n");
        return;
    }

    DLNode* newNode = createDLNode(data);

    newNode->next = p->next;
    newNode->prev = p;

    if (p->next != NULL) {
        p->next->prev = newNode;
    }

    p->next = newNode;
}

// Function to delete a given node from the doubly linked list
void deleteNode(DLNode** head, DLNode* p) {
    if (*head == NULL || p == NULL) {
        fprintf(stderr, "Invalid deletion\n");
        return;
    }

    if (*head == p) {
        *head = p->next;
    }

    if (p->prev != NULL) {
        p->prev->next = p->next;
    }

    if (p->next != NULL) {
        p->next->prev = p->prev;
    }

    free(p);
}

// Function to print the doubly linked list
void printDLL(DLNode* head) {
    DLNode* p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    DLNode* head = create_dllist(n);

    printf("Doubly Linked List: ");
    printDLL(head);

    int dataToInsert, location;
    printf("Enter data to insert: ");
    scanf("%d", &dataToInsert);
    printf("Enter location to insert after (0 for head): ");
    scanf("%d", &location);

    DLNode* p = head;
    while (location > 0 && p != NULL) {
        p = p->next;
        location--;
    }

    insertAfter(p, dataToInsert);

    printf("Doubly Linked List after insertion: ");
    printDLL(head);

    int dataToDelete;
    printf("Enter data to delete: ");
    scanf("%d", &dataToDelete);

    DLNode* current = head;
    while (current != NULL) {
        if (current->data == dataToDelete) {
            deleteNode(&head, current);
            break;
        }
        current = current->next;
    }

    printf("Doubly Linked List after deletion: ");
    printDLL(head);

    // Free memory used by the doubly linked list
    DLNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
