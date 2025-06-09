#include<iostream>
using namespace std;
int tower(int n){
    if(n==0) return n;
    return 2*tower(n-1)+1;
}
int main(){
    int n, count = 2, ans;
    cin>>n;
    cout<<tower(n);
    // for(int i = 1; i<n; i++){
    //     count*=2;
    // }
    // ans = count - 1;
    // cout<<ans;
}