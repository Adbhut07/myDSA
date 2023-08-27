#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s,int e,int k){
    //base case
    //if element not found
    if(s>e)
        return false;

    int mid = s+(e-s)/2;
    //element found
    if(arr[mid]==k)
        return true;

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    
    else{
        return binarySearch(arr,s,mid-1,k);
    }
       
}
int main(){
    int arr[6]={2,4,6,10,14,16};
    
    int key;
    cin>>key;
    int ans = binarySearch(arr,0,5,key);
    if(ans){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
      

    return 0;

}