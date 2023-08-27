// LACTURE 6

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //decimal to binary
/*  int n;
    cin>>n;
    int ans=0;     
    int i=0;
    while(n!=0){
        int bit= n&1;
        ans=(bit * pow(10,i))+ans;
        n=n>>1;
        i++;


    }
    cout<<"answer is: "<<ans<<endl; 
*/


    //*************************** Binary to decimal ***********************
/*  int n;
    cin>>n;

    int i=0, ans=0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;

    }
    cout<<ans<<endl;  
*/


// ************************** REVERSE INTEGER ***********************   

/*      int x;
        cin>>x;
        int ans =0;
        while(x!=0){
            int digit = x%10;
            if((ans<INT_MIN/10)||(ans>INT_MAX/10)){
                return 0;
            }
            
            ans = (ans * 10)+ digit;
            x = x/10;
        }
        cout<<ans;
*/


    // ********************** COMPLIMENT OF BASE 10 INTEGERS ********************
/*      int n;
        cin>>n;
        int m = n;
        if (n==0){
            return 1;
        }
        int mask =0;
        while(m!=0){
            mask= (mask<<1) | 1;
            m= m>>1;
        }
        int ans= (~n) & mask;

        cout<<ans; 
*/

 
return 0;
}

