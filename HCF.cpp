#include<iostream>
using namespace std;

int find_hcf(int n, int m){
     if(m==0) return n;
     return find_hcf(m, n%m);
}

int main(){
    int n, m;
    cin>>n>>m;
    cout<<find_hcf(n, m);
}