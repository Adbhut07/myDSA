// Binary Search  Lecture -> 12
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);          //the logic for using this formula is written in diary

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+((end-start)/2);
    } 
    
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    // int key;
    // cout<<"Enter the key to find: "<<endl;
    // cin>>key;

    int index = binarySearch(even, 6, 12);
    cout<<"Index of 12 is: "<<index<<endl;
    int index2 = binarySearch(odd, 5, 11);
    cout<<"Index of 11 is: "<<index2<<endl;

    return 0;
}