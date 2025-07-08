#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

int solve(vector<int> &v){
    int sum = 0; 
    for(int i = 0; i<v.size(); i++){
        sum+=v[i];
        if(sum==0){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    cout<<solve(v);
}