#include<iostream>
#include<vector>
using namespace std;

// Reverse an array

// vector<int> reverse(vector<int>v){
//     int s=0, e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v){
//     for(int i=0; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;

//     v.push_back(11);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int>ans=reverse(v);

//     cout<<"printing reverse array"<<endl;
//     print(ans);

//     return 0;
// }


// reverse an arrray after some given index


vector<int> reverse(vector<int>v, int n){
    int s=n+1, e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;

    int n=2;

    v.push_back(11);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(7);
    v.push_back(1);
    v.push_back(9);

    vector<int>ans=reverse(v,n);

    cout<<"printing reverse array"<<endl;
    print(ans);

    return 0;
}