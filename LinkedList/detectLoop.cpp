#include<iostream>
#include<map>
using namespace std;
class Node {
    public:
    int data;
    Node* next; 
    
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }    
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

//first approach
bool detectLoop(Node* head){
    if(head == NULL)
        return false;
    
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!= NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

//second Approach
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
    
}
//functon for getting starting of loop
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection -> next;
    }

    return slow;
}
//function for removing loop
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startingOfLoop = getStartingNode(head);
    Node* temp = startingOfLoop;
    while(temp -> next != startingOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL; 
}
int main(){

}