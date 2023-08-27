// LECTURE 8 Functions 
#include<iostream>
using namespace std;


// function for power   *******************************

/* int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    int answer= power(a,b);
    cout<<"Answer is: "<<answer<<endl;
    return 0;
}
*/



// function for odd & even  *******************************

/*
bool isEven(int a){                 // even -> 1     odd -> 0
    //odd
    if (a&1){                     
        return 0;
    }
    //even
    return 1;                   //else return 1
}

int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
    
    return 0;
}
*/



// Function for nCr    *******************************
/*
int factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int ans= (factorial(n))/(factorial(r) * factorial(n-r));         //factorial = n! / r! * (n-r)!
    return ans;
}

int main(){
    int n,r;
    cout<<"enter the values of n & r"<<endl;
    cin>>n>>r;
    int answer= nCr(n,r);
    cout<<"Answer is: "<<answer<<endl;
    return 0;
}
*/

// Counting Printing  *******************************
/*
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printCounting(n);
    return 0;
}
*/



// prime number      ******************************
/*
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if(isPrime(num)==1){
        cout<<"it is a prime number"<<endl;
    }
    else{
        cout<<"it is not a prime number"<<endl;
    }
    return 0;
}
*/


// Home Work   ****************

/*
int ap(int n){
    int AP=(3*n)+7;
    return AP;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth term is: "<<ap(n);
    return 0;
}*/

//Question 2
/*
int countSetBits(int n){
    if(n==0){
        return 0;
    }
    else{
        int ans =(n&1) + countSetBits(n>>1);
        return ans;
    }
}
int bothSetBits(int a,int b){
    a=countSetBits(a);
    b=countSetBits(b);
    int ans=a+b;
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<bothSetBits(a,b);
    return 0;
}
*/

//Question 3
/*
int fib(int n){
    int a=0,b=1;
    int nextNumber;
    for(int i=1;i<=(n-2) ;i++){
        nextNumber=a+b;
        a=b;
        b=nextNumber;
    }
    return nextNumber;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}*/
