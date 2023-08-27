#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"inside fn "<<p<<endl;   // we cam not update address of a value into function 
    *p=*p+1;                          // but we can upate its value in a function 
}

int getSum(int arr[],int n){                //we pass pointer into fn. , i.e if we write *arr at the place of arr[] then both will work same 
    cout<<endl<<"size of "<<arr<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}

int main(){
    /*int value =5;
    int *p = &value;
    print(p);

    cout<<"befor p "<<p<<endl;
    //update(p);
    cout<<"after p "<<p<<endl;

    cout<<"befor p "<<*p<<endl;
    update(p);
    cout<<"after p "<<*p<<endl;
    */

    int arr[6]={1,2,3,4,5,8};
    cout<<"sum is "<<getSum(arr+3,3)<<endl;
    return 0;
}