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
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;     //tail ke next me temp ka address daaldiya 
    tail = temp;  //or tail -> next
}
void insertAtHead(Node* &head, int d){
    //new node creation 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    //..if insert at start
    if(position == 1){
        insertAtHead(head, d);
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
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp -> next = nodeToInsert;
}

//deletiom
void deleteNode(int position, Node* &head, Node* &tail){
    //deleting first node
    if(position==1){
        Node* temp = head;
        head=head->next;
        //memory free of first node
        temp -> next = NULL;
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
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

bool detectLoop(Node* head){
    if(head == NULL)
        return false;
    
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!= NULL){
        if(visited[temp] == true){
            cout<<"present on elememnt "<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

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

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    //cout<<node1 -> data<<endl;
    //cout<<node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    //tail pointed to node1
    Node* tail = node1;

    //print(head);

    //insertAtHead(head,12);
    insertAtTail(tail, 12);
    //print(head);

    insertAtTail(tail, 15);
    //print(head);

    insertAtPosition(head,tail, 4, 22);
    
    tail->next = head->next;

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    //print(head);

    if(floydDetectLoop(head)){
        cout<<"cycle is present "<<endl;
    }
    else{
        cout<<"no cycle";
    }

    Node* loop = getStartingNode(head);
    cout<< "loops starts at "<< loop->data <<endl;

    removeLoop(head);
    print(head);

    // deleteNode(4, head, tail);
    // print(head);
    // cout<<"tail "<<tail->data<<endl;


    return 0;
}