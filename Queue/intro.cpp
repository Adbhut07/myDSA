#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int> q;

    q.push(11);
    cout<<"front of queue is "<<q.front()<<endl;

    q.push(15);
    q.push(13);
    q.push(19);

    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"front of queue is "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queeu is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    return 0;
}