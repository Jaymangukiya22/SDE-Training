#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

int solve(int n, int r){
    int ans = 1;
    for(int i = r; i>0; i--){
        ans*=((n--)/r);
    }
    return ans;
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<solve(n, r);
}//
/*
ncr_recursive(int n, int r){
    r = min(r, n-r);
    if(r<0) return 0;
    if(r==0||r==n||n==0) return 1;
    return ncr_recursive(n-1, r)+ ncr_recursive(n-1, r-1);
}

ncr_memoised(int n, int r){
    
}
*/