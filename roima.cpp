#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<unordered_set>
#include<list>
// smallest missing positive integer in given array
using namespace std;
int solve(vector<int> &a){
    // unordered_set<int> s(a.begin(), a.end());
    // for(int i = 1; i<=a.size(); i++){
    //     if(s.find(i)==s.end()) return i;
    // }
    // return a.size()+1;
    //this was the code to find smallest positive number 
    // ==============================
    int max1 = INT_MIN, max2 = INT_MIN;
    if(a.size()<2) return -1;
    for(int i:a){
        if(i>max1){
            max2 = max1;
            max1 = i;
        }else if(i>max2 && max1>i) max2 = i;
    }
    return (max2==INT_MIN)? -1: max2;

}
int main(){
    vector<int> a = {-2, 3, -1, 0, 1, 4, 5, -1, 6};
    cout<<solve(a); 
}