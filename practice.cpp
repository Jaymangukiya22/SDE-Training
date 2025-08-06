#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

bool solve(string &s){
    stack<char> st;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(st.empty()) return false;
            char top = st.top();
            if(top != '{' && s[i]=='}' ||
               top != '[' && s[i]==']' ||
               top != '(' && s[i]==')'
            )return false;

            st.pop();
        }
    }return st.empty();
    
}

int main(){
    string n;
    cin>>n;
    return solve(n);
}