#include<iostream>
using namespace std;

void update(int **p2){
    //p2=p2+1;
    //kuch change hoga --> NO
    //*p2 = *p2+1;
    //kuch change hoga --> yes
    **p2 = **p2+1;
    //kuch update hoga --> yes
}
int main(){
    int i=5;
    int *p = &i;
    int **p2 = &p;
    cout<<endl;
    cout<<"printing p "<<p<<endl;
    cout<<"address of p  "<<&p<<endl;
    cout<<"*p2 "<<*p2<<endl<<endl;

    //printing the value of i 
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl<<endl;

    //addres of p
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<endl;


    //double pointers in functions 
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;

    return 0;
}
