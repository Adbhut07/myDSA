// LECTURE 8

#include<iostream>
using namespace std;
int main(){
    
/*  int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;

    switch (op){
    case '+':
        cout<<"Answer is: "<<(a+b)<<endl;
        break;
    case '-':
        cout<<"Answer is: "<<(a-b)<<endl;
        break;
    case '*':
        cout<<"Answer is: "<<(a*b)<<endl;
        break;
    case '/':
        cout<<"Answer is: "<<(a/b)<<endl;
        break;
    
    default:cout<<"Please enter a valid condition!"<<endl;
        break;
    }
*/

// note detector 

   int amt;
   cout<<"enter the amount"<<endl;
   cin>>amt;
   int notes100=0, notes50=0, notes20=0, notes1=0;

   switch (100){
   case 100:
    notes100= amt/100;
    cout<<"notes of 100: "<<notes100<<endl;
    amt=amt-(notes100*100);
   case 50:
    notes50= amt/50;
    cout<<"notes of 50: "<<notes50<<endl;
    amt=amt%50;
   case 20:
    notes20= amt/20;
    cout<<"notes of 20: "<<notes20<<endl;
    amt=amt%20;
   case 1:
    notes1= amt/1;
    cout<<"notes of 1: "<<notes1<<endl;
   }

    return 0;
}