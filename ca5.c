#include<stdio.h>
#include<string.h>
//question 1
// Define the structure for a student record
struct Student {
    int rollNumber;
    char name[50];
    float cgpa;
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structures to store student records
    struct Student students[numStudents];

    // Input student records
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Find the topper of the class
    int topperIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].cgpa > students[topperIndex].cgpa) {
            topperIndex = i;
        }
    }

    // Output the details of the topper
    printf("\nTopper of the class:\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Roll Number: %d\n", students[topperIndex].rollNumber);

    return 0;
}

//question 4
#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the queue

// Global queue implementation as an array
int QUEUE[MAX_SIZE];
int front = -1; // Points to the front of the queue
int rear = -1;  // Points to the rear of the queue

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 && rear == -1;
}

// Function to check if the queue is full
int isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    QUEUE[rear] = value;
}

// Function to delete an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

// Function to print the elements in the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    int i = front;
    printf("Queue elements: ");
    while (i != rear) {
        printf("%d ", QUEUE[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", QUEUE[rear]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    displayQueue(); // Should print: 10 20 30 40

    dequeue();
    dequeue();

    displayQueue(); // Should print: 30 40

    return 0;
}

