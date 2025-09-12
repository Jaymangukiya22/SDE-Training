#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

string solve(string n){
    map<char, int> count;
    for(char s: n){
        count[s]++;
    }
    string ans = "";
    int size = n.size();
    while(size>0){
        for(auto &i:count){
            if(i.second==0) continue;
            if(ans[ans.size()-1]==i.first){
                ans = i.first + ans;
            }
            ans+=(i.first);
            i.second--;
            size--;
        }
    }
    return ans;
    
}

int main(){
    string n;
    cin>>n; //input - aabbccd
    //output - abcdabc, abcdcba, acacbdb
    cout<<solve(n);
}