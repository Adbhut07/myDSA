// LECTURE 9 Array 
#include<iostream>
using namespace std;

void printingArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"printing done!!"<<endl;
}



int main(){
/*
    // Initializing an array
    int third[15]={2,7};
    // Printing an array
    int n=sizeof(third)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

    cout<<endl<<endl<<endl;
*/

// initializing all locations with 0 
    int fourth[10]={0};
    printingArray(fourth,10);
    cout<<endl<<endl;
   
   char ch[5]={'a','b','c','r','p'};
   cout<<"third index "<<ch[3]<<endl;
    cout<<"printing the array"<<endl;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }


    return 0;
}
