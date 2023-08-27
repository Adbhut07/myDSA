#include<iostream>
using namespace std;
/*
bool checkPalindrome(string str, int i, int j){
    //base case
    if(i>j)
       return true;
    if(str[i] != str[j])
       return false;
    //recursive function
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}
*/
//more optimised function
bool checkPalindrome(string str, int i=0){
    //base case
    int n= str.length();
    if(i==n/2)
       return true;
    if(str[i] != str[n-i-1])
       return false;
    //recursive function
    else{
        return checkPalindrome(str, i+1);
    }
}


int main(){
    string name = "abbccbba";
    //bool isPalindrome = checkPalindrome(name,0,name.length()-1);
    bool isPalindrome = checkPalindrome(name);
    if(isPalindrome){
        cout<<"its a palindrome"<<endl;
    }
      
    
    else {
        cout<<"its not a palindrome"<<endl;
    }
      

    return 0;
}