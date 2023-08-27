#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    // array<int,4>arr={1,2,3,4};

    // int size= arr.size();
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"element at 2nd index "<<arr.at(2)<<endl;
    // cout<<"empty or not-> "<<arr.empty()<<endl;
    // cout<<"first element "<<arr.front()<<endl;
    // cout<<"last element "<<arr.back()<<endl;


    vector<int>v;
    vector<int>a(5,1);   // a(5,1) means a(size,all values)
    cout<<"print a "<<endl;
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    int size= v.size();
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(1);                              // for inserting a element in end of a vector
    cout<<"capacity -> "<<v.capacity()<<endl;    // capacity of vector will increase in double if there is no space for storing a element
    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    cout<<"element at second index -> "<<v.at(2)<<endl;
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"before pop "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();   // for removing last element in a vector 
    cout<<"after pop "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;


 

    return 0;
}