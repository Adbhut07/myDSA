// String compression {leetcode}
#include<iostream>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //yaha kab aaoge 
            // ya to vector pura traverse kr diya
            //ya to new/different characters encounter kiya hai 

            //old characters store kara lo 
            chars[ansIndex++]=chars[i];
            int count= j-i;
            if(count>1){
                //converting count into a new sigle string
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++]=ch;
                }
            }
            //moving to new different character
            i=j;
        }
        return ansIndex;
    }
};