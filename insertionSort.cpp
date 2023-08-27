#include<iostream>
#include<vector>
using namespace std;
// Insertion sort
void insertionSort(int n, vector<int> &arr){
   for(int i=1;i<n;i++){
       int temp =arr[i];
       int j=i-1;
       for(j;j>=0;j--){
           if(temp<arr[j]){
               //shift
               arr[j+1]=arr[j];           // we dont swap in insertion sort instead we shift elements in insertion sort
           }
           else{ 
               break;
           }
       }
       arr[j+1]=temp;
   } 
}

//e.g  {64,25,12,22,11}