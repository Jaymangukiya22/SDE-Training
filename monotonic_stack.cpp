#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
#include<stack>

using namespace std;

stack<int> mono_decreasing(vector<int> &v){
    stack<int> s;
    for(int i:v){
        while(!s.empty() && i>s.top()){
            s.pop();
        }
        s.push(i);
    }
    return s;
}

stack<int> mono_increasing(vector<int> &v){
    stack<int> s;
    // s.push(v[0]);
    // for(int i:v){    
    //     while(i>=s.top()){
    //         s.pop();
    //     }
    //     s.push(i);
    // }
    for(int i:v){
        while(!s.empty() && i<s.top()){
            s.pop();
        }
        s.push(i);
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    stack<int> ans = mono_increasing(v);
    stack<int> dec = mono_decreasing(v);
    while(!ans.empty()){
        cout<<ans.top()<<endl;
        ans.pop();
    }
}