#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;
vector<int> binary(int n){
    vector<int> ans;
    while(n){
        ans.push_back((n&1));
        n>>=1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    
}