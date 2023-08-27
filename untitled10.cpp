// LECTURE 9 Array   MaxMin.cpp
#include<iostream>
using namespace std;

int getMax(int num[],int size){
    int max= INT_MIN;
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //returning max value
    return max;
}

int getMin(int num[],int size){
    int min= INT_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //returning max value
    return min;
}

int main(){
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;

    int Number[100];
    //taking input in array
    for(int i=0;i<size;i++){
        cin>>Number[i];
    }
    cout<<"Maximum value is "<<getMax(Number,size)<<endl;
    cout<<"Minimum value is "<<getMin(Number,size)<<endl;


    
    return 0;
}