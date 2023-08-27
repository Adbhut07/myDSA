#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];       //using this formula because modulo of any number with any number will be always lies b/w 0 to 9
        }
        //copy temp into nums vector
        nums=temp;
        
}