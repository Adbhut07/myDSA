#include <stdio.h>
#include <stdlib.h>

// Define the Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the Queue structure
typedef struct {
    Node* front; // Pointer to the front element of the queue
    Node* rear;  // Pointer to the rear element of the queue
} Queue;

// Function to create an empty queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (queue == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return (queue->front == NULL);
}

// Function to enqueue an element into the queue
void enqueue(Queue* queue, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = newNode; // The queue is empty, set both front and rear to the new node
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode; // Add the new node to the rear
        queue->rear = newNode;       // Update the rear to the new node
    }
}

// Function to dequeue an element from the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        fprintf(stderr, "Queue is empty, cannot dequeue\n");
        exit(1);
    }
    Node* frontNode = queue->front;
    int data = frontNode->data;

    queue->front = frontNode->next; // Update the front to the next node

    // If the queue becomes empty after dequeue, update the rear as well
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(frontNode); // Free the memory of the dequeued node
    return data;
}

// Function to print the queue (for debugging)
void printQueue(Queue* queue) {
    Node* current = queue->front;
    printf("Queue: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free the memory used by the queue
void destroyQueue(Queue* queue) {
    while (!isEmpty(queue)) {
        dequeue(queue);
    }
    free(queue);
}

int main() {
    Queue* queue = createQueue();

    // Enqueue elements into the queue
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    // Print the queue
    printQueue(queue);

    // Dequeue elements from the queue
    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));

    // Print the queue after dequeue
    printQueue(queue);

    // Free the memory used by the queue
    destroyQueue(queue);

    return 0;
}