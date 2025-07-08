#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

bool solve(string n){
    stack<char> s;
    for(char c:n){
        if(c=='('||c=='{'||c=='[') s.push(c);
        else{
            if(s.empty()) return false;
            char top = s.top();
            s.pop();
            if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='[')) return false;
        }
    }
    return s.empty();
}

int main(){
    string n;
    cin>>n;
    cout<<solve(n);
}