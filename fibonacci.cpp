#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<2) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}