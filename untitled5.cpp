// Lecture 5
// Bitwise operators
#include<iostream>
using namespace std;
int main(){
/*  int a=4;
    int b=6;

    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<~a<<endl;
    cout<<"a^b "<<(a^b)<<endl;

    //left shift operator (<<)    &     Right shift operator(>>)

    cout<<"17>>1 : "<<(17>>1)<<endl;
    cout<<"17>>2 : "<<(17>>2)<<endl;
    cout<<"19<<1 : "<<(19<<1)<<endl;
    cout<<"21<<2 : "<<(21<<2)<<endl;
*/




    //  For loop ***************
/*  int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    cout<<"printing count from 1 to n : "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
*/

//print sum from 1 to n
  
/*  int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;                //or sum=sum+i

    }
    cout<<"the sum is : "<<sum<<endl;
*/


// fabonacci series
    
/*  int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <=n; i++)
    {
        int nextnumber=a+b; 
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
*/   


// Prime number 
/*  int n;
    cout<<"enter he value of n: ";
    cin>>n;

    bool iprime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            iprime=0;
            break;
        }
       
    }
    if (iprime==0)
    {
        cout<<"it is not a prime number"<<endl;
    }
    else{
        cout<<"it is a prime number"<<endl;
    }
*/


    






    return 0;
}
