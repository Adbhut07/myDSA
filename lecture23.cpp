#include<iostream>
using namespace std;

bool isPresent(int brr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(brr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4]){
    cout<<"printing sum -->"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<"sum is "<<sum<<endl;
    }
    cout<<endl;
}
int largestRowSum(int arr[][4],int row,int col){
    int maxi = INT_MIN;
    int rowIndex= -1;
    for(int i=0;i<row;i++){
        int sum=0 ;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"Maximum sum is :"<<maxi<<endl;
    return rowIndex;
}

int main(){
    //initialisation of 2D array 
    int arr[3][4];
    // int brr[3][3]={1,2,3,4,5,6,7,8,9};
    // int crr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //printing the array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    

    //for searching any element into matrix
    // int target;
    // cout<<"enter the element to serach"<<endl;
    // cin>>target;
    // if(isPresent(arr,target,3,4)){
    //     cout<<"element is present"<<endl;
    // }
    // else
    //   cout<<"element is not present"<<endl;

    //printSum(arr);
    int ans= largestRowSum(arr,3,4);
    cout<<"Maximum row is at index "<<ans;
    
    return 0;
}











