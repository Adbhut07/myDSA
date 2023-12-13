#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;
//fn to create new node
Node* createDLNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("error");
        return -1;
    }
    newNode->data = data;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void insertAfter(Node* p,int data){
    if(p==NULL){
        printf("error");
        return;
    }
    Node* newNode = createDLNode(data);
    newNode->next = p->next;
    newNode->prev = p;
    if(p->next!=NULL){
        p->next->prev=newNode;
    }
    p->next=newNode;
}
void deleteNode(Node** head,Node* p){
    if(*head==p){
       *head = p->next;
    }
    if(p->prev != NULL){
        p->prev->next=p->next;
    }
    if(p->next!=NULL){
        p->next->prev=p->prev;
    }
    free(p);
}
void print(Node* head){
    Node* p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main(){
    Node* head = createDLNode(5);
    //print(head);
    insertAfter(head,6);
    print(head);
    deleteNode(&head,head);
    print(head);
    return 0;
}