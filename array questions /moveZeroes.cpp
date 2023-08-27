#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums){
    int nonZero=0; 
    // shifting all non zero elements to the left
    for(int j=0;j<nums.size();j++){
        if(nums[j] != 0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }

}

int main(){

    return 0;
 }