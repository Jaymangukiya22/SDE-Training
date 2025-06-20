#include<iostream>
using namespace std;
int count_neg(int n){
    int count = 0;
    while(n){
        count+=(n&(n<<31));
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<count_neg(n);
}