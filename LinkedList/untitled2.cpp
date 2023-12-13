#include<iostream>
using namespace std;
//doubly linked list
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    //distructor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next==NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
//getting length of linked list 
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail, int d){
    if(head==NULL){
        Node *temp = new Node(d);
        head=temp; 
        tail=temp;
    }
    else{
        //new node creation 
        Node* temp = new Node(d);
        temp -> next = head;
        head->prev=temp;
        head= temp;
    }
    
}
void insertAtTail(Node* &tail,Node* &head, int d){
    if(tail==NULL){
        Node *temp = new Node(d);
        tail=temp; 
        head=temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev = tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int position, int d){
    //..if insert at start
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev=nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev = temp;
}

//deletion in doubly LL
void deleteNode(int position, Node* &head,Node* &tail){
    //deleting first node
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head= temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{   //deletion of any middle or last node
        Node* current = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt<position){
            prev = current;
            current = current -> next;
            cnt++;
        }
        if(current->next == NULL){  //if deleting the last element then til should be change 
            tail = prev;
        }
        
        current->prev=NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current; 
    }
}
//traversing a linked list 
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //Node* node1= new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout<<getLength(head)<<endl;
    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,13);
    print(head);
    insertAtHead(head,tail,8);
    print(head);
    
    insertAtTail(tail,head,25);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);
    insertAtPosition(head,tail,1,101);
    print(head);
    insertAtPosition(head,tail,7,102);
    print(head);

    deleteNode(6,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;



    return 0;
} 