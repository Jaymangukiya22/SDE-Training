#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

vector<int> solve(vector<int> &v){
    stack<int> s;
    vector<int> ans(v.size());
    ans[v.size()-1] = -1;
    s.push(ans[v.size()-1]);
    for(int i = v.size()-1; i>=0; i--){
        while(!s.empty() && v[s.top()]>=s.top()){
            s.pop();
        }
        ans[i] = s.empty()?-1:i;
        s.push(i);
    }
    return ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    vector<int> s = solve(v);
    for(int i:s){
        cout<<i<<endl;
    }
}