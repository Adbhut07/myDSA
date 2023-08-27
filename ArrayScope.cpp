// LECTURE 9 Array   Array Scope
#include<iostream>
using namespace std;

/*
void update(int arr[],int n){
    cout<<"Inside the function"<<endl;
    //printing the array
    arr[0]={120};            // ** this will cause a change of 0 index in main function also
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"going back to main function"<<endl;
}


int main(){
    int arr[3]={3,4,7};
    update(arr,3);

    //printing the array
    cout<<endl<<"printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//  ********************  HW
// sum of all elements of an array

/*
void sumOfArray(int num[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=num[i];
    }
    cout<<endl<<"the sum of all elements of this array is: "<<sum<<endl;
}

int main(){
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    sumOfArray(num,size);
    return 0;
}
*/

// Linear searh in an array 

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={5,7,9,-2,-4,6,1,6,8,3};
    //whether 1 is present in it or not
    cout<<"enter the element to search: "<<endl;
    int key;
    cin>>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }


    return 0;
}

