#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

// string solve(string &n){
//     string ans;
//     map<char, int> freq;
//     for(int i = 0; i<n.size(); i=i+2){
//         freq[n[i]] = n[i+1]-'0';
//     }
//     for(auto i: freq){
//         ans += string(i.second, i.first);
//     }
//     return ans;
// }
// string solve(string &n) {
//   string ans;
//   map<char, int> freq;
//   for(char c:n){
//      freq[c]++;
//   }
//   for(auto i:freq){
//     ans+=(i.second);
//   }
// return ans;
    
// }
void solve(string &n){
map<char, int> freq;
  for(char c:n){
    freq[c]++;
  }
  for(auto i: freq){
    cout<<i.first<<"-"<<i.second<<endl;
  }
}


int main(){
    string n;
    cin>>n;
    solve(n);
}