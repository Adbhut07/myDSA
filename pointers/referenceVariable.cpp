#include<iostream>
using namespace std;

void update2(int &n){  //pass by reference variable,  we use already allocated memory in this
    n++;
}
void update1(int n){
    //function of pass by value, we create new memory in this 
    n++;
}
int& func(int a){  // it is very bad practice dont make functions like this in which you return local variables because u can't access them after function return 
    int num = a;
    int& ans=num;
    return ans;
}
int main(){
    /*
    int i=5;
    //cereating a reference variable
    int &j=i;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    */
     
    //pass by value and pass by reference by using two diff functions 
    int n=5;
    cout<<"before n "<<n<<endl;
    update2(n);
    
    cout<<"after "<<n<<endl;

    return 0;
}