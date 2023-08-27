#include<iostream>
using namespace std;
int getSum(int *arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
/*
int main(){
    char *ch = new char;  //hap memory allocation

    int n;
    cin>>n;
    //variable size array  (by this method we allocate variable in heap memory so that stack overflow will not happen)
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<ans<<endl;

    return 0;
}
*/

// Dynamic memory allocation in 2D array ----->
int main(){
    int row,col;
    cin>>row;
    cin>>col;
    //initialising 2D array in heap
    int **arr= new int*[row];
    for(int i=0;i<row;i++){
        arr[i]= new int[col];
    }

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory after work done 
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}