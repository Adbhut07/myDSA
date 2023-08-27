// Pointers
#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // cout<<num<<endl;
    // //address of operator &-
    // cout<<"address of num is "<<&num<<endl; 

    // int *ptr = &num;
    // cout<<"value is "<<*ptr<<endl;
    // cout<<"address using ptr "<<ptr<<endl; 

    // // size of pointer
    // cout<<"size of num "<<sizeof(num)<<endl;
    // cout<<"size of pointer "<<sizeof(ptr)<<endl;
    
    // int i =5;
    // int *p = 0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num =5;
    int a=num;
    a++;
    cout<<num<<endl;
    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;

    //copying a pointer into another pointer
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //important concept
    int i=3;
    int *t=&i;
    //cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    return 0;
}