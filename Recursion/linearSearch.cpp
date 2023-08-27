#include<iostream>
using namespace std;
bool linearSearch(int *arr, int size, int key){
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else{
        bool reaminingPart = linearSearch(arr+1,size-1,key);
        return reaminingPart;
    }
    
}
int main(){
    int arr[]={2,4,6,8,9};
    int size=5;
    int key;
    cin>>key;
    int ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}