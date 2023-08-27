// Lecture-3 [Love babbar]

#include<iostream>
using namespace std;
int main(){
    /*int c;
    cout<<"hello"<<endl;
    cin>>c;
    cout<<c<<endl;*/
    
    /* int a,b;
    cin>>a>>b;
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl; */


//for printing the ascii value or getting the value of space or tab or any other key
   
    /* int c;
    c=cin.get();
    cout<<"the value of C is: "<<c<<endl; */


// program for finding greater number between two numbers
    /*int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    if(a<b){
        cout<<"a is less than b"<<endl;
    }
    if(a==b){
        cout<<"a is equal to b"<<endl;
    } */

//program for checking wheter the number is positive or negative 

    /* int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"a is positive number!"<<endl;
    } 
    else if(a<0){
        cout<<"a is negative number!"<<endl;
    }
    else{
        cout<<"a is zero"<<endl;
    } */



    //*******  HW
    /* char ch;
    cout<<"enter the value of character"<<endl;
    cin>>ch;
    if ((ch>=65)&&(ch<=90)){
        cout<<"character is Uppercase !!"<<endl;
    }
    else if((ch>=97)&&(ch<=122)){
        cout<<"character is lowercase !!"<<endl;
    }
    else if((ch>=48)&&(ch<=57)){
        cout<<"This is numeric"<<endl; 
    } */


// *********loops***********
    //while loop

    /*int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }*/

// sum of numbers
    /* int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"The sum is"<<sum<<endl; */


// sum of all even numbers
    /* int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"the sum of all even numbers is"<<sum<<endl; */


// a given no. is prime or not
/*  int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not a prime for"<<i<<endl;
        }
        else{
            cout<<"prime for"<<i<<endl;
        }
        i=i+1;
    }
*/


// Paterns prining    
    /*--->  ***
            ***
            ***   */

/*    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/

   /*-->     111
             222
             333 */

/*   int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/

     /* -->   321
              321
              321
*/

/*  int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
*/

/*     1 2 3 4
       5 6 7 8
       9 10 11 12
       13 14 15 16  */
    
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while (j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i++;
        
    }


    return 0;
}