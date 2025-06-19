#include<iostream>
using namespace std;
int find_bits(int n){
    //
    int count = 0;
    while(n>0){
        // if((n&1)==1){
        //     count++;
        // }
        // n>>=1;

        count+=(n&1);
        n = n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<find_bits(n);
}