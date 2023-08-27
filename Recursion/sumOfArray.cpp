#include<iostream>
using namespace std;
int isSum(int *arr, int size){
    int sum =0;
    if(size==0)
       return 0;
    return arr[size - 1] + isSum(arr, size - 1);
}
int main(){
    int arr[5]={2,4,6,8,9};
    int size=5;
    int ans = isSum(arr,size);
    cout<<ans;
}