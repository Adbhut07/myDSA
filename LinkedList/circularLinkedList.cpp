#include<iostream>
using namespace std;
//circular linked list
class Node{
    public:
    int data;
    Node* next;
    //constuctor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this-> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present iin the list 
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty  -- assuming the element is present in the list
        Node* current = tail;
        while(current->data != element){
            current = current->next;
        }
        //current found -- current repreneting element wala node
        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    else{
        //non empty list
        Node* prev = tail;
        Node* current  = prev -> next;

        while(current->data != value){
            prev = current;
            current = current -> next;
        }
        //if only one node is present
        if(current==prev){
            tail=NULL;
        }
        //<=2 node linked list 
        else if(tail==current){
            tail = prev;
        }
         
        prev->next = current->next;
        current->next = NULL;
        delete current;

    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp != tail);
    cout<<endl;
}

int main(){
    Node* tail = NULL;

    //empty List
    insertNode(tail,5,3);
    print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    // insertNode(tail,4,6);
    // print(tail);

    // insertNode(tail,6,8);
    // print(tail);

    // insertNode(tail,4,5);
    // print(tail);
    
    // insertNode(tail,6,7);
    // print(tail);

    // deleteNode(tail,4);
    // print(tail);
    // deleteNode(tail,3);
    // print(tail);
    deleteNode(tail,3);
    print(tail);

    return 0;
}

