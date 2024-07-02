#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties 
    public:
      int *arr;
      int size;
      int top;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<< "Stack is full"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stcak is underflow"<<endl;
        }
    }
    int peek(){
        if(top >=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    int isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    /*
    stack<int>s;

    s.push(2);
    s.push(3);

    s.pop();

    cout<<"printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    */

   Stack st(5);

   st.push(22);
   st.push(43);
   st.push(94);
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;

   if(st.isEmpty()){
    cout<<"stack is empty"<<endl;
   }
   else{
    cout<<"Stack is not empty"<<endl;
   }
}
