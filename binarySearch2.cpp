// Binary Search  Lecture -> 13
#include<iostream>
using namespace std;

// qus-->  left most accurance and right most accurance of a key in an array

// for total no. of occ. -->  last index - first index + 1
/*
int firstOcc(int arr[],int n,int key){
    int s=0, e=n-1;
    int mid= s + ((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){ //right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){  //left me jao
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0, e=n-1;
    int mid= s + ((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){ //right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){  //left me jao
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int main(){
    int even[9]={1,2,3,3,3,3,3,3,5};
    cout<<"first occurance of 3 is  "<<firstOcc(even,9,3)<<endl;
    cout<<"last occurance of 3 is  "<<lastOcc(even,9,3);

    return 0;
}
*/

//find peak element in mounted array

int peakValue(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid= s+((e-s)/2);
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+((e-s)/2);
    }
    return s;

}
int main(){
    int arr[4]={3,4,5,1};
    int ans=peakValue(arr,4);
    cout<<"peak value of this mounted array is: "<<arr[ans]<<endl;
    
    return 0;

}