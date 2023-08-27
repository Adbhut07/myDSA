#include<iostream>
using namespace std;

// SQRT problem
/*
long long int sqrtInteger(int n){
    int s=0;
    int e=n;
    long long int mid= s+((e-s)/2);
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+((e-s)/2);
    }
    return ans;
}
double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans= tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    int tempSol = sqrtInteger(n);
    cout<<"Answer is  "<<morePrecision(n,3,tempSol);
    return 0;
}
*/



// book allocate problem
/*

bool isPossible(vector<int>& arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e){
        
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
*/