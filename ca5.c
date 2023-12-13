#include <stdio.h>
#include <string.h>
// question 1
//  Define the structure for a student record
/*
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
*/


// question 4
/*
int n = 100;
int arr[100];
int front = -1;
int back = -1;
int isEmpty()
{
    if (front == -1 || front > back)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (back == n - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int x)
{
    if (isFull())
    {
        printf("Queue is full\n");
        return;
    }
    back++;
    arr[back] = x;

    if (front == -1)
    {
        front++;
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    front++;
}
int peek()
{
    if (isEmpty())
    {
        printf("no element present in queue\n");
        return -1;
    }
    return arr[front];
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    printf("%d ", peek());
    pop();
    printf("%d ", peek());
    pop();
    printf("%d ", peek());
    pop();
    printf("%d ", peek());
    pop();
    printf("%d ", peek());
    pop();
    printf("%d ", peek());
    return 0;
}
*/


//Q5) Write functions to add and delete items from a circular queue implemented as an array. Assume any global variables required.
   // *IMPORTANT*

#include <stdio.h>
#include <stdlib.h>

int size = 100;
int q[100];
int front = -1;
int rear = -1;

int isFull(){
   if (rear==size-1 && front==0){
    return 1;
   }
   else if (rear == (front-1)%(size-1)){
    return 1;
   }   
   else return 0;         
}



int isEmpty(){
    if (front==-1) return 1;
    else return 0;
}
  
void enQ(int x){                  // adding an element
    if (isFull()){
        printf("Queue is Full");
    }
    else{
       if (front==-1){                        // when we add first element
        front = rear = 0;
       }
       else if (rear==size-1 && front!=0){         // when rear is at last but out front is not 0 so we have extra space for adding.
             rear = 0;
       }
       else{
          rear++;
       }
       
       q[rear] = x;
    }
}


void deQ(){
    if (isEmpty()){
        printf("Queue is Empty");
    }
    else{
        if (front==rear){           // only one element is present
             front = rear = -1;
        }
        else if (front==size-1){    
            front = 0;
        }
        else{
            front++;
        }

     }
}

int main(){


    return 0;
}

// question 7
/*
int s1[100];
int s2[100];
void enQueue(int x)
{
    // Move all elements from s1 to s2
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    // Push item into s1
    s1.push(x);

    // Push everything back to s1
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
int deQueue()
{
    // if both stacks are empty
    if (s1.empty() && s2.empty())
    {
        return -1;
    }

    // if s2 is empty, move
    // elements from s1
    if (s2.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    // return the top item from s2
    int x = s2.top();
    s2.pop();
    return x;
}*/
