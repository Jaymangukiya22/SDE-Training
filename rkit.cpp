#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
// typedef vector<int> vi;
using namespace std;

vector<int> solve(vector<int> &arr){
    vector<int> pos; vector<int> neg;
    for(int i:arr){
        if(i<0) neg.push_back(i);
        else pos.push_back(i);
    }
    int a = 0, i = 0;
    while(i<arr.size()){
        arr[i++] = pos[a];
        arr[i++] = neg[a++];
    }
    return arr;
}

int main(){
    // int n;
    // cin>>n;
    vector<int> arr = {1,5,7,8,-1,-9,-5,-4, 6};
    vector<int> ans = solve(arr);
    for(int i:ans){
        cout<<i<<" ";
    }
}