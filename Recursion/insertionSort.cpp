#include<iostream>
using namespace std;
void sortArray(int *arr,int n){
    if(n<=1)
       return ;
    sortArray(arr,n-1);
    int last = arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int arr[5]={2,5,1,6,9};
    sortArray(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}