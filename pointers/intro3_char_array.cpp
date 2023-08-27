#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;   //prints entire string

    char *c= &ch[0];
    //prints entire string 
    cout<<c<<endl;    // this will print until there is a null character present 

    //another example if there in no null character 
    char temp='z';
    char *p = &temp;
    cout<<p<<endl;    // this will print until there is a null char. present into memory block
    


    return 0;
}