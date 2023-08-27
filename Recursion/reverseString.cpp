#include<iostream>
using namespace std;
/*
void reverse(string &str,int i,int j){
    cout<<"call received for "<<str<<endl;
    //base case 
    if(i>j)
       return ;
    swap(str[i],str[j]);
    i++;
    j--;
    //recursicve call
    reverse(str,i,j);
}
*/

// More optomized way to write reverse recursive function
void reverse(string &str,int i=0){
    int n= str.length();
    //base case 
    if(i==n/2)
       return ;
    swap(str[i],str[n-i-1]);
    //recursicve call
    reverse(str,i+1);
}


int main(){
    string name = "abcde";
    //reverse(name, 0, name.length()-1);
    reverse(name);
    cout<<name<<endl;
}