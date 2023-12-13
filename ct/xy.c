#include<stdio.h>
typedef struct node{
    int data;
    node* left;
    node* right;
}node;

node* createNode(int data){
    node* newNode= (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
       printf("malloc error");

    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

node* buildTree(node* root){
    
}

int main(){
    node* root = NULL;

    return 0;
}