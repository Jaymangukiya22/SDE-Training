#include<iostream>
using namespace std;
int find_bits(int n){
    if(n<0) return 32;
    // return floor(log2(n))+1;
    int count = 0;
    while(n){
        n>>=1;
        count++;
    }
    return count;
    //this code will be used to find the total number of bits of a given number
}
int main(){
    int n;
    cin>>n;
    cout<<find_bits(n);
}