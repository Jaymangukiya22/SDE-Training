#include<iostream>
using namespace std;
int lsb(int n){
    n = n^(n&(n-1));
    int count=0;
    while(n){
        count++;
        n>>=1;
    }
    return count-1;
}
int main(){
    int n;
    cin>>n;
    cout<<lsb(n);
}