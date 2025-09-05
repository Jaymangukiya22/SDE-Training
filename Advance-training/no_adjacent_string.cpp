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
    for(auto i:count){
        ans+=i.first;
        i.second--;
        cout<<i.second<<endl;
    }
    return ans;
}

int main(){
    string n;
    cin>>n; //input - aabbccd
    //output - abcdabc, abcdcba, acacbdb
    cout<<solve(n);
}