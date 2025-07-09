#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
#include<stack>

using namespace std;

vector<int> solve(vector<int> &v){
    stack<int> s;
    vector<int> ans(v.size());
    ans[0] = -1;
    s.push(ans[0]);
    for(int i = 0; i<v.size(); i++){
        while(!s.empty() && v[i]<=s.top()){
            s.pop();
        }
        ans[i] = s.empty()?-1:s.top();
        s.push(v[i]);
    }
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